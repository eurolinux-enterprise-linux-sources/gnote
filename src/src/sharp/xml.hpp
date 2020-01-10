/*
 * gnote
 *
 * Copyright (C) 2012,2017 Aurimas Cernius
 * Copyright (C) 2009 Hubert Figuiere
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */




#ifndef __SHARP_XML_HPP_
#define __SHARP_XML_HPP_

#include <vector>

#include <glibmm/ustring.h>
#include <libxml/tree.h>

namespace sharp {


  typedef std::vector<xmlNodePtr> XmlNodeSet;

  XmlNodeSet xml_node_xpath_find(const xmlNodePtr node,
                                 const char * xpath);

  Glib::ustring xml_node_xpath_find_single(const xmlNodePtr node,
                                           const char * xpath);

  xmlNodePtr xml_node_xpath_find_single_node(const xmlNodePtr node,
                                             const char * xpath);

  Glib::ustring xml_node_content(xmlNodePtr node);

  Glib::ustring xml_node_get_attribute(const xmlNodePtr node,
                                       const char * attr_name);

}


#endif
