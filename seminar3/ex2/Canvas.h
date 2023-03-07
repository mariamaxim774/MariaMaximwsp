#pragma once
#include <stdio.h>
#include <iostream>

class Canvas
{
    int w, h;
    char** matrix;

public:

    Canvas(int width, int height)
    {
        w = width;
        h = height;
        matrix = (char**)malloc(this->h * sizeof(char*));
        for (int i = 0; i < this->h; i++)
        {
            this->matrix[i] = (char*)malloc(this->w * sizeof(char));
            memset(matrix[i], ' ', this->w);
        }
    }

    void DrawCircle(int, int, int, char);

    void FillCircle(int, int, int, char);

    void DrawRect(int, int, int, int, char);

    void FillRect(int, int, int, int, char);

    void SetPoint(int, int, char);

    void DrawLine(int, int, int, int, char);

    void Print(); // shows what was printed

    void Clear(); // clears the canvas

    friend void display_Bresenham_circle(int, int, int, int, char* [], char, int, int);

    friend void fill_Bresenham_circle(int, int, int, int, char* [], char, int, int);

};
