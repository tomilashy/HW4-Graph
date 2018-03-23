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

	undirected G;// would change to graph g for actual use of polymorphism,
	Graph *g= &G;
	g->toString();


	char a;
	do{
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
			"k) Exit\n";
	cin>>a;

	switch (a)
	{
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

		}
		break;
		case 'j':
		{

		}
		break;
	}

	}while (a!='k');


	return 0;
}

