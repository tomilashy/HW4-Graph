/*
 * TestGraph.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
#include "Vertex.h"
#include "Edges.h"
#include "Undirected.h"
int main()
{
	string x =NULL;
	undirected g;// would change to graph g for actual use of polymorphism,
	Edge edge[20];
	Vertex vertex[20];
	for (int i= 0; i<20; i++)
	{
	vertex [i]= Vertex(x);
	edge [i]= Edge(vertex[i],vertex [i],0);
	}

	vertex [0]= Vertex("spain");
	vertex [1]= Vertex("nigeria");
	vertex [2]= Vertex("usa");
	vertex [3]= Vertex("uk");
	edge [0]= Edge(vertex[0],vertex [1],1100);
	edge [1]= Edge(vertex[1],vertex [3],1000);
	edge [2]= Edge(vertex[3],vertex [2],1600);
	edge [3]= Edge(vertex[2],vertex [0],1700);

	cout<< "what do you want to do?\n";
	char a;
	cout<<"a) add Vertex\n"
			"b) remove vertex\n"
			"c) add Edge\n"
			"d) remove Edge\n"
			"e) search Vertex\n"
			"f) search Edge\n"
			"g) display Vertex\n"
			"h) display Edge\n"
			"i) display Graph\n"
			"j) converts the whole graph to a string\n";
	cin>>a;

	switch (a)
	{
		case 'a':
		{
			for (int i= 0; i<20; i++)
				{
					if (vertex[i].getname()==x)
					{
						g.addVertex(vertex[i]);
						break;

					}
				}
		}
		break;
		case 'b':
		{
			cout<<"Input the name of Node you want to remove";
							string node;
							cin>>node;
			for (int i= 0; i<20; i++)
			{

				if (vertex[i].getname()==node)
				{
					g.removeVertex(vertex[i]);
					break;
					/*
					go to  undirected.h and change the virtual bool removeVertex(Vertex& v[]);
					go to  undirected.cpp and change the virtual bool removeVertex(Vertex& v[])
					and implent the overiding of array function there
					put g.removeVertex(vertex); in this switch statement
					then set the final array back to NULL
					*/
				}
			}
		}
		break;
		case 'c':
		{
			cout<<"Input the name of origin node";
			string node1;
			cin>>node1;
			cout<<"Input the name of destination node";
			string node2;
			cin>>node2;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {

				if(vertex[i].getname()==node1 && vertex[j].getname()==node2){

				for (int k = 0; k < 20; k++) {


						if (edge[k].getOrigin() == x && edge[k].getDest() == x) {

							g.addEdge(edge[k], vertex[i], vertex[j]);
							break;

						}
					}
				}
			}
		}
		}
		break;
	}



	delete[] edge;
	delete[] vertex;
	return 0;
}

