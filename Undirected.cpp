/*
 * Undirected.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include "Undirected.h"


undirected::undirected()
{

//another thing u can do is create the edges and vertex in undirected/graph
//helps u have shorter main
}

   bool undirected:: addVertex(Vertex& v)
   {	string a;
   	   cout<<"what is the name of the vertex";
   	   cin>>a;
	   v=Vertex (a);
	   return true;
   }
//Bonus question: adds in a set of vertices; returns  bool  if added
 //successfully
  // bool undirected:: addVertices(Vertex* vArray)

//removes a vertex; the edges that have connection with this vertex need to
 //be removed;
   bool undirected:: removeVertex(Vertex& v)
   {
	   v=Vertex(x);
	   return true;
   }
//adds an edge; returns true if the edge is added successfully.
   bool undirected:: addEdge(Edge& e,Vertex& v,Vertex& a)
   {
	   int  c;
	   cout <<"\nInput the distance of the Edge";
	   cin>>c;
	   e =Edge ( v, a, c);
	   return true;
   }
//Bonus question: removes a set of edges; as a result, some nodes may remain
 //as orphan.
//   bool undirected:: addEdges(Edge* eArray) = 0;
// remove the edgexx
   bool undirected:: removes(Edge& e)
   {
	   e=Edge(Vertex(x),Vertex(x),0);
	   return true;
   }
// returns  bool  if a vertex exists in a graph.
   bool undirected:: searchVertex(const Vertex& v)
   {
	   cout<<"\nGraph Exist";
	   return true;
   }
// returns  bool if an Edge exists in a graph.
   bool undirected:: searchEdge(const Edge& e)
   {
	   cout<<"\nEdge Exist";
	   return true;
   }
// displays the path that contains the vertex.undirected::
  void undirected:: display(Vertex& v) const
  {
	  	 cout<<endl<<"Vertex: "<<v.getname();

  }
// displays the path that contains the edge.
  void undirected:: display(Edge& e) const
  {
	  cout<<endl<<"Edge: \n";
	  cout<<endl<<"Origin: "<<e.getOrigin();
	  cout<<endl<<"Destination: "<<e.getDest();
	  cout<<endl<<"Distance: "<<e.getDistance();
  }
// displays the whole graph with your own defined format
  void undirected:: display(Edge e[]) const
  {
	  std::map<string,string> sets;
		for (int i= 0; i<=20; i++)
					{
						if (i==20){break;}
						else if (e[i].getOrigin()!="")
						{
							string c1=e[i].getOrigin(),c2=e[i].getDest();

							sets.insert({c1,c2});
						}
					}
		cout<<"where do you want to start?";
		string s;
		cin>>s;
		cout<<s;


			here:
			for (std::map<string,string>::iterator it=sets.begin(); it!=sets.end(); ++it)
			{
				if(sets.size()==0)
								{
									break;
								}


				if(it->first==s)
				{
					if(sets.size()==1)
					{
						goto here2;
					}

					cout<<" ";
					cout<<it->second;
					s=it->second;
					here2:
					sets.erase(it);
					goto here;
				}
			}
			for (std::map<string,string>::iterator it=sets.begin(); it!=sets.end(); ++it)
						{
							if(sets.size()==0)
											{
												break;
											}

							if(sets.size()!=0)
							{
								s=it->first;
							goto here;
							}
						}




  }
 // converts the whole graph to a string such as 1-2-4-5; 1-3-5; each path
 // is separated by ';'
  string undirected:: toString (Edge e[]) const
  {
	  string c;
	  std::map<string,string> sets;

	 		for (int i= 0; i<=20; i++)
	 					{
	 						if (i==20){break;}
	 						else if (e[i].getOrigin()!="")
	 						{
	 							string c1=e[i].getOrigin(),c2=e[i].getDest();

	 							sets.insert({c1,c2});
	 						}
	 					}
	 		cout<<"where do you want to start?";
	 		string s;
	 		cin>>s;
	 		c=s;

	 			here:
	 			for (std::map<string,string>::iterator it=sets.begin(); it!=sets.end(); ++it)
	 			{
	 				if(sets.size()==0)
	 								{
	 									break;
	 								}

	 				if(it->first==s)
	 				{

	 					if(sets.size()==1)
	 										{
	 											goto here2;
	 										}

	 					c +="->" +it->second;
	 					s=it->second;here2:
	 					sets.erase(it);

	 					goto here;
	 				}
	 			}

	 			for (std::map<string,string>::iterator it=sets.begin(); it!=sets.end(); ++it)
	 						{
	 							if(sets.size()==0)
	 											{
	 												break;
	 											}

	 							if(sets.size()!=0)
	 							{

	 								s=it->first;
	 							goto here;
	 							}
	 						}
	 			cout<<endl<<c<<endl;

return conv;

  }
//remove all the vertices and edges;
   bool undirected:: clean()
   {
	   return true;
   }
void undirected::mymain()
{

}
undirected::~undirected()
{

}

