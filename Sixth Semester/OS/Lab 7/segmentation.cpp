#include <iostream>
#include <vector>

class Segment
{
public:
    int baseAddress;
    int limit;
    Segment(int baseAddress, int limit) : baseAddress(baseAddress), limit(limit) {}

    int getPhysicalAddress()
    {
        return baseAddress + displacement;
    }

    void setDisplacement(int displacement) { this->displacement = displacement; }

private:
    int displacement = 0;
};

class SegmentSystem
{
public:
    void initializeSegment()
    {
        int numSegments;

        std::cout << "Enter the number of segments: ";
        std::cin >> numSegments;

        for (int i = 0; i < numSegments; ++i)
        {
            int baseAddress, limit;
            std::cout << "Enter the base address for segment " << i << ": ";
            std::cin >> baseAddress;
            std::cout << "Enter the limit for segment " << i << ": ";
            std::cin >> limit;
            segments.push_back(Segment(baseAddress, limit));
        }
    }

    void processLogicalAddress(int segmentNumber, int displacement)
    {
        if (segmentNumber >= 0 && segmentNumber < segments.size())
        {
            Segment &currentSegment = segments[segmentNumber];
            currentSegment.setDisplacement(displacement);
           
            if (currentSegment.limit < displacement)
            {
                std::cout << "Page Size Exceeds";
            }
            else
            {
                std::cout
                    << "\n\tPageNo.\t BaseAdd. PhysicalAdd. \n\t " << segmentNumber
                    << "\t " << currentSegment.baseAddress << "\t " << currentSegment.getPhysicalAddress() << "\n";
            }
        }
    }

private:
    std::vector<Segment> segments;
};

int main()
{
    SegmentSystem segmentingSystem;
    std::cout << "\nProgram for segmenting...\n";

    segmentingSystem.initializeSegment();

    std::cout << "\n\nGetting the physical address......\n";
    int segmentNumber, logicalAddress;
    std::cout << "Enter the segment number: ";
    std::cin >> segmentNumber;

    std::cout << "Enter the Logical Address: ";
    std::cin >> logicalAddress;

    segmentingSystem.processLogicalAddress(segmentNumber, logicalAddress);
}