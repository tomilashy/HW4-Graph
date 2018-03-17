/*
 * Vertex.h
 *
 *  Created on: Mar 14, 2018
 *      Author: ore-oluwa.olasubulumi
 */
#include <string>

#ifndef VERTEX_H_
#define VERTEX_H_

class Vertex
{
	public:
		Vertex (string a){name = a;};
		Vertex (const Vertex &v);
		string getname(){return name;};
		~Vertex();
	private:
		string name;
};



#endif /* VERTEX_H_ */
