/*
 * TestGraph.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <list>
#include <set>
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;
#include "Vertex.h"
#include "Edges.h"
#include "Undirected.h"
int main()
{

	string x ="";
	undirected g;// would change to graph g for actual use of polymorphism,
	Edge* edge= new Edge[20];
	Vertex* vertex= new Vertex[20];
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


	char a;
	do{
	cout<< "\nwhat do you want to do?\n";


	cout<<"a) add Vertex\n"
			"b) remove vertex\n"
			"c) add Edge\n"
			"d) remove Edge\n"
			"e) search Vertex\n"
			"f) search Edge\n"
			"g) display Vertex\n"
			"h) display Edge\n"
			"i) display Graph\n"
			"j) converts the whole graph to a string\n"
			"k) Exit\n";
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

						for (int j =0; j<20; j++)
						{
							if (vertex[i].getname()==vertex[j].getname())
							{
								g.removeVertex(vertex[i]);
								cout<<"\n you inputted a duplicate which is invalid";
								break;
							}
						}

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
			for (int i= 0; i<=20; i++)
			{ if (i==20)
				{
					cout<<"INVALID VERTEX!!\n";
				}

			else if (vertex[i].getname()==node)
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
						else if (k++==20)
						{
							cout<<"Memory Full";
						}
					}
				}


			}
		}
		}
		break;
		case 'd':
		{
			cout<<"Input the name of origin node";
			string node1;
			cin>>node1;
			cout<<"Input the name of destination node";
			string node2;
			cin>>node2;
				for (int k = 0; k <= 20; k++)
				{if (k==20)
						{
							cout<<"INVALID EDGE!!\n";

						}
				else if (edge[k].getOrigin() == node1 && edge[k].getDest() == node2)
						{
							g.removes(edge[k]);
						}

				}
		}
		break;
		case 'e':
		{
			cout<<"Input the name of Node you want to search";
			string node;
			cin>>node;
			for (int i= 0; i<=20; i++)
			{
				if (i==20)
				{
					cout<<"INVALID VERTEX!!\n";
				}

				else if (vertex[i].getname()==node)
				{
					g.searchVertex(vertex[i]);
				}

			}

		}
			break;
		case 'f':
				{
					cout<<"Input the name of origin node";
								string node1;
								cin>>node1;
								cout<<"Input the name of destination node";
								string node2;
								cin>>node2;
									for (int k = 0; k <= 20; k++)
									{if (k==20)
											{
												cout<<"EDGE DOES NOT EXIST!!\n";

											}
									else if (edge[k].getOrigin() == node1 && edge[k].getDest() == node2)
											{
												g.searchEdge(edge[k]);
											}

									}
				}
					break;
		case 'g':
				{
					for (int i= 0; i<=20; i++)
					{  if (i==20)
						{
							break;
						}
						else if (vertex[i].getname()!="")
						{
							g.display(vertex[i]);
						}

					}

				}
					break;
		case 'h':
				{
					for (int i= 0; i<=20; i++)
						{  if (i==20)
							{
								break;
							}
							else if (edge[i].getOrigin()!="")
							{
								g.display(edge[i]);
							}

						}

				}
					break;
		case 'i':
				{

					int V=0;
					for (int i= 0; i<=20; i++)
						{
						if (i==20){break;}

						else if (vertex[i].getname()!=""){	V++;}
						}		//gotten number of nodes


					g.display(edge);

				}
					break;
		case 'j':
				{
					int V=0;
										for (int i= 0; i<=20; i++)
											{
											if (i==20){break;}

											else if (vertex[i].getname()!=""){	V++;}
											}		//gotten number of nodes


										g.toString(edge);


				}
					break;
	}

	}while (a!='k');

	delete[] edge;
	delete[] vertex;
	return 0;
}
