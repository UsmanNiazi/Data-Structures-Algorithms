#pragma once
class graph
{
	public:
	int** matrix;
	graph()
	{
		
	}
	void construct(int vertices);
	void fill(int vertices);
	int insert(int rows, int columns, int weight);
	void display(int v);
	int Order();

};