#pragma once
#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"

using namespace std;

namespace SoftUni
{
	class Resource
	{
		int id; 
		ResourceType type;
		string link;
	public:
		Resource() = default;

		Resource(int, ResourceType, string);


		ResourceType getType() const
		{
			return this->type;
		}

		int getId() const {
			return this->id;
		}

		string getLink() const {
			return this->link;
		}

		bool operator<(const Resource& other) const {
			return this->id < other.id;
		}
		
	};
	Resource::Resource(int id_, ResourceType resoursType_, string link_)
	{
		this->id = id_;
		this->link = link_;
		this->type = resoursType_;
	}
	

	istream& operator>>(istream& in, Resource& r)
	{
		int id;
		string typeString;
		string link;

		in >> id >> typeString >> link;

		ResourceType type;
		if (typeString == "Presentation") {
			type = ResourceType::PRESENTATION;
		}
		else if (typeString == "Demo") {
			type = ResourceType::DEMO;
		}
		else if (typeString == "Video") {
			type = ResourceType::VIDEO;
		}

		r = Resource(id, type, link);

		return in;
	}

	ostream& operator<<(ostream& out, const Resource& r) {
		return out << r.getId() << " " << r.getType() << " " << r.getLink();
	}

	
	
};



#endif // !RESOURCE_H
