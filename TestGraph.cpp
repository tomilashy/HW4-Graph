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

	undirected G;
	Graph *g= &G;	//using polymorphism so other graphs can be made later



	char a;int j;char q2;
	do{
	cout<< "\n\nwhat do you want to do?\n"
			"\n1) Question 1 of assignment"
			"\n2) question 2 of the assignment"
			"\n3) exit";

	cin>>j;
switch(j)
case 1:
{
	cout<< "\n\nwhat do you want to do?\n";
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
			"k) Clear all Edges and Vertex\n"
			"l) Exit Q1\n";
	cin>>a;
	switch (a)
	do{
	case 'a':
			{
				cout<<"\nWhat is the name of the Vertex";
				string v;
				cin>>v;
				Vertex V(v);
				g->addVertex(V);
			}
			break;
			case 'b':
			{
				cout<<"\nWhat is the name of the Vertex";
							string v;
							cin>>v;
							Vertex V(v);
				g->removeVertex(V);
			}
			break;
			case 'c':
			{
				cout<<"\nWhat is the name of the Vertex";
				string v1;
				cin>>v1;
				Vertex V(v1);

				if(g->searchVertex(V))
				{
					cout<<"\nWhat is the name of the Vertex";
								string v2;
								cin>>v2;
								Vertex V2(v2);
					if(g->searchVertex(V2))
					{
						int n;
						cout<<"\nwhat is the their distance";
						cin>>n;
						Edge e(V,V2,n);
						g->addEdge(e);
					}

				}

			}
			break;
			case 'd':
			{

				cout<<"\nWhat is the name of the Origin";
				string v1;
				cin>>v1;
				Vertex V(v1);


					cout<<"\nWhat is the name of the Destination";
								string v2;
								cin>>v2;
								Vertex V2(v2);

						int n;
						cout<<"\nwhat is the their distance";
						cin>>n;
						Edge e(V,V2,n);
						g->removes(e);


			}
			break;
			case 'e':
			{
				cout<<"\nWhat is the name of the Vertex";
							string v1;
							cin>>v1;
							Vertex V(v1);

							g->searchVertex(V);



			}
			break;
			case 'f':
			{

				cout<<"\nWhat is the name of the Origin";
				string v1;
				cin>>v1;
				Vertex V(v1);


				cout<<"\nWhat is the name of the Destination";
				string v2;
				cin>>v2;
				Vertex V2(v2);

				int n;
				cout<<"\nwhat is the their distance";
				cin>>n;
				Edge e(V,V2,n);
				g->removes(e);
			}
			break;
			case 'g':
			{
				Vertex v("");
				g->display(v);
			}
			break;
			case 'h':
			{
				Vertex v(""),v2("");
				Edge e(v,v2,0);
				g->display(e);

			}
			break;
			case 'i':
			{
				g->display();
			}
			break;
			case 'j':
			{
				cout<<endl<<g->toString();
			}
			break;
			case'k':
			{
				g->clean();
			}
			break;

	}while(a!='l');
break;
case 2:
	do{
	cout<< "\n\nwhat do you want to do?\n";
		cout<<"a) G1 == G2, returns true if G1 and G2 have the exact same vertices and edges\n"
				"b) G1 = G2, assigns Graph G2 to Graph G\n"
				"c) G++ and ++G, increases the weights of all edges by one;\n"
				"d) G3 = G1 + G2, returns a graph that contains all the nodes of G1 and G2, all the edges of G1 and G2;\n"
				"e) G1 > G2, returns boolean if the sum of weights of G1’s edges is greater than the sum of weights of G2’s edges\n"
				"f) << G outputs the graph G.\n"
				"g) Exit Q2";
		cin>>q2;
		switch(q2)
		{
			case 'a':
			{

			}
			break;
			case 'b':
			{

			}
			break;
			case 'c':
			{

			}
			break;
			case 'd':
			{

			}
			break;
			case 'e':
			{

			}
			break;
			case 'f':
			{

			}
			break;
		}

	}while (q2!='g');
	break;
	}

	}while (j!=3);


	return 0;
}

