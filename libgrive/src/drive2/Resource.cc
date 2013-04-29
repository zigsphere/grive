/*
	grive: an GPL program to sync a local directory with Google Drive
	Copyright (C) 2013 Wan Wai Ho

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation version 2
	of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
	MA  02110-1301, USA.
*/

#include "Resource.hh"

namespace gr { namespace v2 {

/**	Default constructor construct the resource of the root folder
*/
Resource::Resource() :
	m_id( "root" ),
	m_mime( "application/vnd.google-apps.folder" ),
	m_title( "Root folder" )
{
}

Resource::Resource( const std::string& id, const std::string& mime, const std::string& title ) :
	m_id( id ),
	m_mime( mime ),
	m_title( title )
{
}

std::string Resource::ID() const
{
	return m_id ;
}

std::string	Resource::Mime() const
{
	return m_mime ;
}

std::string Resource::Title() const
{
	return m_title ;
}

bool Resource::IsFolder() const
{
	return m_mime == "application/vnd.google-apps.folder" ;
}

void Resource::Add( const std::string& child_id )
{
	m_children.push_back( child_id ) ;
}

} } // end of namespace gr::v2
