#pragma once

template <typename T>

class Point {
public:
    Point(T x, T y) : x_(x), y_(y) {} // Constructor -> Assign parameters to the member variables

	// Accessor functions -> return the member variables
    T x() const { return x_; }
    T y() const { return y_; }

    // Mutator functions
    void setX(T x) { x_ = x; }
    void setY(T y) { y_ = y; }

	Point operator+(const Point& other) const { // Overloaded + operator
        return Point(x_ + other.x_, y_ + other.y_);
    }

    template <typename U>
    Point<T> operator+(const Point<U>& other) const {
        return Point<T>(x_ + static_cast<T>(other.x()), y_ + static_cast<T>(other.y()));
    }

private: // Data members
    T x_;
    T y_;
};