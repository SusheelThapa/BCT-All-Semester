'''Page Replacement algorithm'''

def pageReplacement(total_frames: int = 4):
    # Necessary variable
    page_fault = 0
    page_hit = 0

    # Keep track of the pages in the frame
    frames = list()

    page = 1

    print("PRESS 0 TO QUIT...")

    # Continously take input from user and evalute page_hit or page_fault
    while page != 0:
        page = int(input('Enter page numbers: '))

        # Page is already present in the frames
        if frames.__contains__(page):
            page_hit += 1
            continue

            # Page is not present in the frames and frames is completely filled
        if frames.__len__() == total_frames:
            page_fault += 1
            frames.pop(0)

        frames.append(page)

    return page_hit, page_fault


if __name__ == "__main__":
    page_hit, page_fault = pageReplacement(4)
    print(f'Total page fault: {page_fault} | Total page hit = {page_hit}')
