#pragma once

#include <cstddef>
#include <iostream>
#include <vector>

// http://codeofthedamned.com/index.php/introduction-to-the-math-of
class MyMatrix {

public:
	MyMatrix();
	MyMatrix(size_t r, size_t c, std::vector<double> d);
	MyMatrix(const MyMatrix& o);

	const double& elem(size_t i) const;
	const double& elem(size_t row, size_t column) const;

	size_t rows() const;
	size_t cols() const;
	const std::vector<double>& data() const;

	MyMatrix& add(const MyMatrix& o);
	MyMatrix& multiply(double o);
	MyMatrix& multiply(const MyMatrix& o);
	MyMatrix& invert();
	MyMatrix& transpose();

private:
	size_t mRows;
	size_t mCols;
	std::vector<double> mData;

};

std::ostream& operator<<(std::ostream& out, const MyMatrix& m);
