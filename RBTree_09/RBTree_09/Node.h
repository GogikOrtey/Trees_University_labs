#pragma once
enum class Color { Red = 4, White = 15 };

struct Time
{
public:
    int hour;
    int minutes;

    Time(int hour = -1, int minutes = -1)
    {
        this->hour = hour;
        this->minutes = minutes;
    }
};

class Node
{
public:
    Color color;
    Node* parent;
    Node* leftchild;
    Node* rightchild;
    Time key;
    int count;

    Node(Time key = Time(),
        Node* parent = nullptr,
        Node* leftchild = nullptr,
        Node* rightchild = nullptr,
        Color color = Color::Red,
        int count = 1)
    {
        this->key = key;
        this->parent = parent;
        this->leftchild = leftchild;
        this->rightchild = rightchild;
        this->color = color;
        this->count = count;
    }
};
