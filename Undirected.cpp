/*
 * Undirected.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include "Undirected.h"


undirected::undirected()
{

	vertex.push_back(Vertex("spain"));
		vertex.push_back(Vertex("nigeria"));
		vertex.push_back(Vertex("usa"));
		vertex.push_back(Vertex("uk"));
		edge.push_back( Edge(vertex[0],vertex [1],1100));
		edge.push_back(Edge(vertex[1],vertex [3],1000));
		edge.push_back(Edge(vertex[3],vertex [2],1600));
		edge.push_back(Edge(vertex[2],vertex [0],1700));

}

bool undirected:: addVertex(Vertex &v)
{
	   for ( vector<Vertex>::iterator it = vertex.begin(); it != vertex.end(); ++it )
	   {
		   if(it->getname()==v.getname())
		   {

	 	   cout<<"\nCannot add a Duplicate";

	 	   return false;
		   }
	      }
	   vertex.push_back(v);
		 	   cout<<"\nAdded successfully";

		 	   return true;

}
//Bonus question: adds in a set of vertices; returns  bool  if added
 //successfully
  // bool undirected:: addVertices(Vertex* vArray)

//removes a vertex; the edges that have connection with this vertex need to
 //be removed;
   bool undirected:: removeVertex(Vertex& v)
   {
	   for ( vector<Vertex>::iterator it = vertex.begin(); it != vertex.end(); ++it )
	   	   {
	   		   if(it->getname()==v.getname())
	   		   {
	   			   vertex.erase(it);
	   	 	   cout<<"\nRemoved successfully";

	   	 	   return true;
	   		   }
	   	      }
	   cout<<"\nIvalid Vertex Inputted";
	   return true;

   }
//adds an edge; returns true if the edge is added successfully.
   bool undirected:: addEdge(Edge& e)
   {
	   for ( vector<Edge>::iterator it =edge.begin(); it != edge.end(); ++it )
	   	   {
	   		   if(it->getOrigin()==e.getOrigin()&&it->getDest()==e.getDest())//can add distance if graph has multiple parts
	   		   {
	   			if(it->getOrigin()==e.getOrigin()&&it->getDest()==e.getDest()&&it->getDistance()==e.getDistance())
	   				   		   {
	   				   			cout<<"\nCannot add a Duplicate";
	   				   			return false;
	   				   		   }
	   			cout<<"\nWarning: A similar egde will be made because they have different distances"
	   					"\n Do you want coutinue?(type 0 for yes and 1 for no)";
	   			int a;
	   			cin>> a;
	   			switch(a)
	   			{
	   			case 0:
	   				edge.push_back(e);
	   				cout<<"\nAdded successfully";
	   				return true;
	   			break;
	   			case 1:
	   				cout<<"\nDid not create a similar Edge.";
	   				return false;
	   			break;
	   			}

	   		   }
	   	   }

	   			edge.push_back(e);
	   		 	   cout<<"\nAdded successfully";
	   		 	   return true;
}
//Bonus question: removes a set of edges; as a result, some nodes may remain
 //as orphan.
//   bool undirected:: addEdges(Edge* eArray) = 0;
// remove the edgexx
   bool undirected:: removes(Edge& e)
   {

	   for ( vector<Edge>::iterator it =edge.begin(); it != edge.end(); ++it )
	   	   {
	   			if(it->getOrigin()==e.getOrigin()&&it->getDest()==e.getDest()&&it->getDistance()==e.getDistance())
	   			{
	   				edge.erase(it);
	   				cout<<"\nRemoved Successfully";

	   				return true;
	   			}
	   	   }

	   cout<<"\nEdge does not exist.";
	   return false;
   }
// returns  bool  if a vertex exists in a graph.
   bool undirected:: searchVertex(const Vertex &v)
   {
	   for ( vector<Vertex>::iterator it = vertex.begin(); it != vertex.end(); ++it )
	   		   	   	   {
	   	   		   if(it->getname()==v.getname())
	   	   		   {
	   	   			   cout<<"\nVertex exist";
	   	   			   return true;
	   	   		   }
	   		   	   	   }
	   cout<<"\nVertex does not exist";
	   return false;
   }
// returns  bool if an Edge exists in a graph.
   bool undirected:: searchEdge(const Edge &e)
   {
	   for ( vector<Edge>::iterator it =edge.begin(); it != edge.end(); ++it )
	   	   	   {
	   	   			if(it->getOrigin()==e.getOrigin()&&it->getDest()==e.getDest()&&it->getDistance()==e.getDistance())
	   	   			{

	   	   				cout<<"\nEdge exist";

	   	   				return true;
	   	   			}
	   	   	   }

	   	   cout<<"\nEdge does not exist.";
	   	   return false;

   }
// displays the path that contains the vertex.undirected::
  void undirected:: display(Vertex &v) const
  {

	  for ( unsigned int it =0; it != vertex.size(); ++it )
	  	   {
	  		  cout<<"\nVertex:" <<vertex[it].getname();
 	      }
  }
// displays the path that contains the edge.
  void undirected:: display(Edge &e) const
  {
	  for ( unsigned int it =0; it != edge.size(); ++it )
		  	   {
		  		 edge[it].print();
	 	      }
  }
// displays the whole graph with your own defined format
  void undirected:: display() const
  {
	  	  std::map<string,string> sets;
	  	  for (unsigned int i= 0; i<edge.size(); i++)
	  	  {
	  		  string c1=edge[i].getOrigin(),c2=edge[i].getDest();
	  		  sets.insert({c1,c2});
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
	  			  
	  			  cout<<" ";
	  			  cout<<it->second;
	  			  s=it->second;
	  			 
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
  string undirected:: toString () const
  {
	//  const_cast<undirected*>(this)->	rent = "Available";


	  	  	  std::map<string,string> sets;

	  	  	for (unsigned int i= 0; i<edge.size(); i++)
	  	  		  {
	  	  			  string c1=edge[i].getOrigin(),c2=edge[i].getDest();
	  	  			  sets.insert({c1,c2});
	  	  		  }
	  	  	 		cout<<"where do you want to start?";
	  	  	 		string s;
	  	  	 		cin>>s;
	  	  	 	const_cast<undirected*>(this)->conv=s;

	  	  	 			here:
	  	  	 			for (std::map<string,string>::iterator it=sets.begin(); it!=sets.end(); ++it)
	  	  	 			{
	  	  	 				if(sets.size()==0)
	  	  	 								{
	  	  	 									break;
	  	  	 								}

	  	  	 				if(it->first==s)
	  	  	 				{

	  	  	 					

	  	  	 				const_cast<undirected*>(this)->conv +="->" +it->second;
	  	  	 					s=it->second;
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


	  	  return conv;


  }
//remove all the vertices and edges;
   bool undirected:: clean()
   {
	   vertex.clear();
	   edge.clear();
	   cout<<"Cleared!!";
	   return true;
   }

undirected::~undirected()
{

}
