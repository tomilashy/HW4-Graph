/*
 * Edges.h
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include <iostream>
#include <string>
#include "Vertex.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;
#ifndef EDGES_H_
#define EDGES_H_
class Edge
{	public:
		Edge(Vertex a, Vertex b,int dist)
		{
			origin =a.getname();
			destination=b.getname();
			distance=dist;
		};
//		Edge(Edge &e);
		Edge() = default;
		bool operator< (const Edge &right) const
		{
		    return origin < right.destination;
		}
		int getDistance(){return distance;};
		string getOrigin(){return origin;};
		string getDest(){return destination;};
	private:
		string origin;
		string destination;
		int distance;
};




#endif /* EDGES_H_ */
