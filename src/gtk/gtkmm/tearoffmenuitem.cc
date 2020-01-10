// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

//Allow us to use the struct fields.
//TODO: We need to remove these methods anyway in a future ABI break.
#undef GSEAL_ENABLE
 

#include <glibmm.h>

#include <gtkmm/tearoffmenuitem.h>
#include <gtkmm/private/tearoffmenuitem_p.h>


// -*- c++ -*-
/* $Id: tearoffmenuitem.ccg,v 1.1 2003/01/21 13:40:40 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>

namespace Gtk
{

bool TearoffMenuItem::is_torn_off() const
{
  return gobj()->torn_off;
}

} /* namespace Gtk */

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::TearoffMenuItem* wrap(GtkTearoffMenuItem* object, bool take_copy)
{
  return dynamic_cast<Gtk::TearoffMenuItem *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TearoffMenuItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TearoffMenuItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_tearoff_menu_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TearoffMenuItem_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TearoffMenuItem_Class::wrap_new(GObject* o)
{
  return manage(new TearoffMenuItem((GtkTearoffMenuItem*)(o)));

}


/* The implementation: */

TearoffMenuItem::TearoffMenuItem(const Glib::ConstructParams& construct_params)
:
  Gtk::MenuItem(construct_params)
{
  }

TearoffMenuItem::TearoffMenuItem(GtkTearoffMenuItem* castitem)
:
  Gtk::MenuItem((GtkMenuItem*)(castitem))
{
  }

TearoffMenuItem::~TearoffMenuItem()
{
  destroy_();
}

TearoffMenuItem::CppClassType TearoffMenuItem::tearoffmenuitem_class_; // initialize static member

GType TearoffMenuItem::get_type()
{
  return tearoffmenuitem_class_.init().get_type();
}


GType TearoffMenuItem::get_base_type()
{
  return gtk_tearoff_menu_item_get_type();
}


TearoffMenuItem::TearoffMenuItem()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::MenuItem(Glib::ConstructParams(tearoffmenuitem_class_.init()))
{
  

}


} // namespace Gtk


