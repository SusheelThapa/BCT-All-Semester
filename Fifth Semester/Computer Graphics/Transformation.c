#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define CLOCKWISE 1
#define ANTICLOCKWISE -1

/* Homogenous Coordinate Data type*/
typedef struct Point
{
	float x, y, h;

} Point;

/*Data Type: To store coordinate of Triangle*/
typedef struct Triangle
{
	Point side_one;
	Point side_two;
	Point side_three;
} Triangle;

float **initialize2DMat()
{
	/*
	Dynamically initialze the 2d array of 3 * 3 and return pointer reference
	*/
	int i;

	float **arr = (float **)malloc(3 * sizeof(float *));
	for (i = 0; i < 3; i++)
		arr[i] = (float *)malloc(3 * sizeof(float));

	return arr;
}

Point matMul3X3(float **mat_one, Point point)
{
	/**
	 * For transformation, we need to multiply matrix  3 X 3 with 3 X 1
	 * This function multiply the given matrix and return the result which is again 3 x 1
	 *
	 * Point datatype contains 3 variable which is treated as 3 X 1 matrix
	 */
	Point new_point;

	new_point.x = mat_one[0][0] * point.x + mat_one[0][1] * point.y + mat_one[0][2] * point.h;
	new_point.y = mat_one[1][0] * point.x + mat_one[1][1] * point.y + mat_one[1][2] * point.h;
	new_point.h = 1;

	return new_point;
}

Point translation(Point translating_point, Point translation_vector)
{
	/**
	 * This functions translate the given point using provide translation_vector
	 * and return the translated_point
	 */

	// Initializing the variable
	Point translated_point;
	float **vector = initialize2DMat();

	// Creating the transformation matrix for translation
	vector[0][0] = 1;
	vector[0][1] = 0;
	vector[0][2] = translation_vector.x;
	vector[1][0] = 0;
	vector[1][1] = 1;
	vector[1][2] = translation_vector.y;
	vector[2][0] = 0;
	vector[2][1] = 0;
	vector[2][2] = 1;

	// Calculating the final point after translation
	translated_point = matMul3X3(vector, translating_point);

	return translated_point;
}

Point scaling(Point scaling_point, Point scaling_factor, Point scaling_fixed_point)
{
	/**
	 * This functions scale the given point using provide scaline_factor and fixed_point
	 * and return the scaled_point
	 */

	// Initialization of variables
	Point scaled_point;
	float **vector = initialize2DMat();

	scaling_fixed_point.x += 0;

	// Creating the transformation matrix
	vector[0][0] = scaling_factor.x;
	vector[0][1] = 0;
	vector[0][2] = 0;
	vector[1][0] = 0;
	vector[1][1] = scaling_factor.y;
	vector[1][2] = 0;
	vector[2][0] = 0;
	vector[2][1] = 0;
	vector[2][2] = 1;

	// Calculation of the scaled point
	scaled_point = matMul3X3(vector, scaling_point);

	return scaled_point;
}

Point rotation(Point rotating_point, float angle, int direction)
{
	/**
	 * This functions rotate the given point using provided angle and direction
	 * and return the rotated_point
	 */

	// Initialze the variables
	Point rotated_point;
	float **vector = initialize2DMat();

	// Create transformation matrix
	vector[0][0] = cos(angle * direction);
	vector[0][1] = -sin(angle * direction);
	vector[0][2] = 0;
	vector[1][0] = sin(angle * direction);
	vector[1][1] = cos(angle * direction);
	vector[1][2] = 0;
	vector[2][0] = 0;
	vector[2][1] = 0;
	vector[2][2] = 1;

	// Calculate the rotated point
	rotated_point = matMul3X3(vector, rotating_point);

	return rotated_point;
}

Point reflection(Point reflecting_point, float slope, float intercept)
{

	/**
	 * This functions reflect the given point using provide slope and  intercept
	 * and return the reflected_point
	 */

	// Initialize the variable
	Point reflected_point;
	float angle = atan(slope);
	float **vector = initialize2DMat();

	// Create transformation matrix
	vector[0][0] = cos(2 * angle);
	vector[0][1] = sin(2 * angle);
	vector[0][2] = -sin(2 * angle) * intercept;
	vector[1][0] = sin(2 * angle);
	vector[1][1] = -cos(2 * angle);
	vector[1][2] = intercept * (1 + cos(2 * angle));
	vector[2][0] = 0;
	vector[2][1] = 0;
	vector[2][2] = 1;

	// Calculate the reflected point
	reflected_point = matMul3X3(vector, reflecting_point);

	return reflected_point;
}

Point shearing(Point shearing_point, Point shear_point_value, Point ref_axis)
{
	Point sheared_point;
	float **vector = initialize2DMat();

	vector[0][0] = 1;
	vector[0][1] = shear_point_value.x;
	vector[0][2] = -1 * shear_point_value.x * ref_axis.y;
	vector[1][0] = shear_point_value.y;
	vector[1][1] = 1;
	vector[1][2] = -1 * shear_point_value.y * ref_axis.x;
	vector[2][0] = 0;
	vector[2][1] = 0;
	vector[2][2] = 1;

	// Calculate the reflected point
	sheared_point = matMul3X3(vector, shearing_point);

	return sheared_point;
}

void drawTriangle(Triangle triangle)
{
	line((int)triangle.side_one.x, (int)triangle.side_one.y, (int)triangle.side_two.x, (int)triangle.side_two.y);
	line((int)triangle.side_two.x, (int)triangle.side_two.y, (int)triangle.side_three.x, (int)triangle.side_three.y);
	line((int)triangle.side_three.x, (int)triangle.side_three.y, (int)triangle.side_one.x, (int)triangle.side_one.y);
}

int main()
{
	/**
	 * =====================================================================================
	 * 						Initialization of Variable
	 * =====================================================================================
	 */

	int gd = DETECT, gm;

	Triangle triangle = {{100, 50, 1}, {200, 50, 1}, {150, 100, 1}};

	Triangle translated_triangle, scaled_triangle, rotated_triangle, reflected_triangle, sheared_triangle;
	Point one, two, three;

	Point translation_vector = {100, 100, 1};
	Point scaling_vector = {2, 2, 1};
	Point origin = {0, 0, 0};
	Point ref_axis = {-2, 0, 1}, shear_point_value = {0, 2, 1};

	clrscr();

	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	/**
	 * =====================================================================================
	 * 							Drawing X Axis and Y Axis and Orginal Triangle
	 * =====================================================================================
	 */

	line(0, 240, 640, 240);
	line(320, 0, 320, 480);

	setcolor(WHITE);

	drawTriangle(triangle);

	/**
	 * ===================================================================
	 * 							Translation
	 * ===================================================================
	 */

	translated_triangle = triangle;

	// Calculating translted point
	translated_triangle.side_one = translation(translated_triangle.side_one, translation_vector);
	translated_triangle.side_two = translation(translated_triangle.side_two, translation_vector);
	translated_triangle.side_three = translation(translated_triangle.side_three, translation_vector);

	// Adding padding
	translated_triangle.side_one.x += 320;
	translated_triangle.side_two.x += 320;
	translated_triangle.side_three.x += 320;

	// Rendering the triangle
	setcolor(GREEN);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 10);

	drawTriangle(translated_triangle);

	/**
	 * ===================================================================
	 * 							Scaling
	 * ===================================================================
	 */

	scaled_triangle = triangle;

	scaled_triangle.side_one = scaling(scaled_triangle.side_one, scaling_vector, origin);
	scaled_triangle.side_two = scaling(scaled_triangle.side_two, scaling_vector, origin);
	scaled_triangle.side_three = scaling(scaled_triangle.side_three, scaling_vector, origin);

	// Adding Padding
	scaled_triangle.side_one.y += 240;
	scaled_triangle.side_two.y += 240;
	scaled_triangle.side_three.y += 240;

	// Rendering the triangle
	setcolor(BLUE);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 100);

	drawTriangle(scaled_triangle);

	/**
	 * ===================================================================
	 * 							Rotation
	 * ===================================================================
	 */

	rotated_triangle = triangle;

	// Calculating translted point
	rotated_triangle.side_one = rotation(rotated_triangle.side_one, M_PI / 10, ANTICLOCKWISE);
	rotated_triangle.side_two = rotation(rotated_triangle.side_two, M_PI / 10, ANTICLOCKWISE);
	rotated_triangle.side_three = rotation(rotated_triangle.side_three, M_PI / 10, ANTICLOCKWISE);

	// Adding padding
	rotated_triangle.side_one.x += 320;
	rotated_triangle.side_two.x += 320;
	rotated_triangle.side_three.x += 320;

	rotated_triangle.side_one.y += 240;
	rotated_triangle.side_two.y += 240;
	rotated_triangle.side_three.y += 240;

	// Rendering the triangle
	setcolor(RED);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 100);
	drawTriangle(rotated_triangle);

	/**
	 * ===================================================================
	 * 							Shearing
	 * ===================================================================
	 */

	sheared_triangle = triangle;
	sheared_triangle.side_one = shearing(sheared_triangle.side_one, shear_point_value, ref_axis);
	sheared_triangle.side_two = shearing(sheared_triangle.side_two, shear_point_value, ref_axis);
	sheared_triangle.side_three = shearing(sheared_triangle.side_three, shear_point_value, ref_axis);

	// Rendering the triangle
	setcolor(LIGHTCYAN);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 100);
	line(320, 0, 320, 480);
	
	drawTriangle(sheared_triangle);

	/***
	 * ============================================================================
	 * 					Translating the triangle to 4th section
	 * 			so that we can show the reflection in more convinent manner
	 * ============================================================================
	 */

	// Shifting the coordinates
	triangle.side_one.x += 320;
	triangle.side_two.x += 320;
	triangle.side_three.x += 320;

	triangle.side_one.y += 240;
	triangle.side_two.y += 240;
	triangle.side_three.y += 240;

	// Drawing the triangle
	setcolor(WHITE);
	drawTriangle(triangle);

	/**
	 * ===================================================================
	 * 							Reflection
	 * 						- About y = mx +c
	 * 						- About y = 480
	 * 						- About x = 320
	 * ===================================================================
	 */
	reflected_triangle = triangle;

	// Calculating reflected point about y = mx +c
	reflected_triangle.side_one = reflection(reflected_triangle.side_one, -0.75, 480);
	reflected_triangle.side_two = reflection(reflected_triangle.side_two, -0.75, 480);
	reflected_triangle.side_three = reflection(reflected_triangle.side_three, -0.75, 480);

	// Rendering the triangle
	setcolor(BROWN);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 400);
	line(0, 480, 640, 0);

	drawTriangle(reflected_triangle);

	/**
	 * -----------------------------------------------------------------------------------------
	 */

	// Calculating reflected point about y = 240
	reflected_triangle = triangle;
	reflected_triangle.side_one = reflection(reflected_triangle.side_one, 0, 240);
	reflected_triangle.side_two = reflection(reflected_triangle.side_two, 0, 240);
	reflected_triangle.side_three = reflection(reflected_triangle.side_three, 0, 240);

	// Rendering the triangle
	setcolor(YELLOW);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 100);
	line(0, 240, 640, 240);

	drawTriangle(reflected_triangle);

	/**
	 * -----------------------------------------------------------------------------------------
	 */

	// Calculating the reflected point about x =320
	reflected_triangle = triangle;
	reflected_triangle.side_one = reflection(reflected_triangle.side_one, tan(M_PI / 2), 10);
	reflected_triangle.side_two = reflection(reflected_triangle.side_two, tan(M_PI / 2), 10);
	reflected_triangle.side_three = reflection(reflected_triangle.side_three, tan(M_PI / 2), 10);

	reflected_triangle.side_one.x += 640;
	reflected_triangle.side_two.x += 640;
	reflected_triangle.side_three.x += 640;

	// Rendering the triangle
	setcolor(MAGENTA);
	setlinestyle(SOLID_LINE, USERBIT_LINE, 100);
	line(320, 0, 320, 480);
	drawTriangle(reflected_triangle);

	/**
	 * -----------------------------------------------------------------------------------------
	 */

	getch();
	closegraph();

	return 0;
}