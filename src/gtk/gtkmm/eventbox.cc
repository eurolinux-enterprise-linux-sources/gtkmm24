// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/eventbox.h>
#include <gtkmm/private/eventbox_p.h>

// -*- c++ -*-
/* $Id: eventbox.ccg,v 1.1 2003/01/21 13:38:49 murrayc Exp $ */

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

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::EventBox* wrap(GtkEventBox* object, bool take_copy)
{
  return dynamic_cast<Gtk::EventBox *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& EventBox_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EventBox_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_event_box_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void EventBox_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EventBox_Class::wrap_new(GObject* o)
{
  return manage(new EventBox((GtkEventBox*)(o)));

}


/* The implementation: */

EventBox::EventBox(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

EventBox::EventBox(GtkEventBox* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

EventBox::~EventBox()
{
  destroy_();
}

EventBox::CppClassType EventBox::eventbox_class_; // initialize static member

GType EventBox::get_type()
{
  return eventbox_class_.init().get_type();
}


GType EventBox::get_base_type()
{
  return gtk_event_box_get_type();
}


EventBox::EventBox()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(eventbox_class_.init()))
{
  

}

bool EventBox::get_visible_window() const
{
  return gtk_event_box_get_visible_window(const_cast<GtkEventBox*>(gobj()));
}

void EventBox::set_visible_window(bool visible_window)
{
gtk_event_box_set_visible_window(gobj(), static_cast<int>(visible_window)); 
}

bool EventBox::get_above_child() const
{
  return gtk_event_box_get_above_child(const_cast<GtkEventBox*>(gobj()));
}

void EventBox::set_above_child(bool above_child)
{
gtk_event_box_set_above_child(gobj(), static_cast<int>(above_child)); 
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> EventBox::property_visible_window() 
{
  return Glib::PropertyProxy<bool>(this, "visible-window");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> EventBox::property_visible_window() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "visible-window");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> EventBox::property_above_child() 
{
  return Glib::PropertyProxy<bool>(this, "above-child");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> EventBox::property_above_child() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "above-child");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


