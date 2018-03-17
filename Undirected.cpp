/*
 * Undirected.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include "Undirected.h"


undirected::undirected()
{
	mymain();
}

   bool undirected:: addVertex(Vertex v)
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
   bool undirected:: removeVertex(Vertex v)
   {
	   v=Vertex(NULL);
	   return true;
   }
//adds an edge; returns true if the edge is added successfully.
   bool undirected:: addEdge(Edge e,Vertex v,Vertex a)
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
   bool undirected:: removes(Edge e)
   {

	   return true;
   }
// returns  bool  if a vertex exists in a graph.
   bool undirected:: searchVertex(const Vertex v)
   {

	   return true;
   }
// returns  bool if an Edge exists in a graph.
   bool undirected:: searchEdge(const Edge e)
   {

	   return true;
   }
// displays the path that contains the vertex.undirected::
  void undirected:: display(Vertex v) const
  {


  }
// displays the path that contains the edge.
  void undirected:: display(Edge e) const
  {

  }
// displays the whole graph with your own defined format
  void undirected:: display() const
  {

  }
 // converts the whole graph to a string such as 1-2-4-5; 1-3-5; each path
 // is separated by ';'
  string undirected:: toString () const
  {
	//  const_cast<cars*>(this)->	rent = "Available";
	  const string a="No";
	  return a;

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

