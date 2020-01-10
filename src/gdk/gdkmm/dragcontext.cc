// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GSEAL_ENABLED
 

#include <glibmm.h>

#include <gdkmm/dragcontext.h>
#include <gdkmm/private/dragcontext_p.h>


// -*- c++ -*-
/* $Id: dragcontext.ccg,v 1.7 2005/02/13 13:01:36 murrayc Exp $ */

/*
 *
 * Copyright 2002 The gtkmm Development Team
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

#include <gdkmm/window.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <glibmm/utility.h> //For ScopedPtr<>.

namespace Gdk
{

void DragContext::find_window_for_screen(const Glib::RefPtr<Window>& drag_window, const Glib::RefPtr<Screen>& screen, int x_root, int y_root, Glib::RefPtr<Window>& dest_window, DragProtocol* protocol) const
{
  GdkWindow* cWindow = 0;
  gdk_drag_find_window_for_screen(const_cast<GdkDragContext*>(gobj()), drag_window->gobj(), screen->gobj(), x_root, y_root, &cWindow, (GdkDragProtocol*)(protocol));
  dest_window = Glib::wrap((GdkWindowObject*)cWindow);
}

void DragContext::drag_refuse(guint32 time)
{
  gdk_drag_status(gobj(), ((GdkDragAction)(0)) /* see GDK docs */, time);
}

Gdk::ListHandle_AtomString DragContext::get_targets() const
{
 //Note that we don't free the GList* (or it's items), because we are accessing the struct directly:
  return ListHandle_AtomString( gdk_drag_context_list_targets(const_cast<GdkDragContext*>(gobj())), Glib::OWNERSHIP_NONE);
}

} /* namespace Gdk */

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::DragAction>::value_type()
{
  return gdk_drag_action_get_type();
}

// static
GType Glib::Value<Gdk::DragProtocol>::value_type()
{
  return gdk_drag_protocol_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::DragContext> wrap(GdkDragContext* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::DragContext>( dynamic_cast<Gdk::DragContext*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& DragContext_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DragContext_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_drag_context_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DragContext_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* DragContext_Class::wrap_new(GObject* object)
{
  return new DragContext((GdkDragContext*)object);
}


/* The implementation: */

GdkDragContext* DragContext::gobj_copy()
{
  reference();
  return gobj();
}

DragContext::DragContext(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

DragContext::DragContext(GdkDragContext* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


DragContext::~DragContext()
{}


DragContext::CppClassType DragContext::dragcontext_class_; // initialize static member

GType DragContext::get_type()
{
  return dragcontext_class_.init().get_type();
}


GType DragContext::get_base_type()
{
  return gdk_drag_context_get_type();
}


DragContext::DragContext()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(dragcontext_class_.init()))
{
  

}

Glib::RefPtr<DragContext> DragContext::create()
{
  return Glib::RefPtr<DragContext>( new DragContext() );
}

void DragContext::drag_status(DragAction action, guint32 time)
{
  gdk_drag_status(gobj(), ((GdkDragAction)(action)), time);
}

void DragContext::drop_reply(bool ok, guint32 time)
{
  gdk_drop_reply(gobj(), static_cast<int>(ok), time);
}

void DragContext::drop_finish(bool success, guint32 time)
{
  gdk_drop_finish(gobj(), static_cast<int>(success), time);
}

Glib::ustring DragContext::get_selection() const
{
  return Gdk::AtomString::to_cpp_type(gdk_drag_get_selection(const_cast<GdkDragContext*>(gobj())));
}

void DragContext::drag_finish(bool success, bool del, guint32 time)
{
  gtk_drag_finish(gobj(), static_cast<int>(success), static_cast<int>(del), time);
}

void DragContext::set_icon(const Glib::RefPtr<Gdk::Colormap>& colormap, const Glib::RefPtr<Gdk::Pixmap>& pixmap, const Glib::RefPtr<Gdk::Bitmap>& mask, int hot_x, int hot_y)
{
  gtk_drag_set_icon_pixmap(gobj(), Glib::unwrap(colormap), Glib::unwrap(pixmap), Glib::unwrap(mask), hot_x, hot_y);
}

void DragContext::set_icon(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf, int hot_x, int hot_y)
{
  gtk_drag_set_icon_pixbuf(gobj(), Glib::unwrap(pixbuf), hot_x, hot_y);
}

void DragContext::set_icon(const Glib::ustring& stock_id, int hot_x, int hot_y)
{
  gtk_drag_set_icon_stock(gobj(), stock_id.c_str(), hot_x, hot_y);
}

void DragContext::set_icon_name(const Glib::ustring& name, int hot_x, int hot_y)
{
  gtk_drag_set_icon_name(gobj(), name.c_str(), hot_x, hot_y);
}

void DragContext::set_icon()
{
  gtk_drag_set_icon_default(gobj());
}

Glib::RefPtr<Window> DragContext::get_source_window()
{
  Glib::RefPtr<Window> retvalue = Glib::wrap((GdkWindowObject*)(gdk_drag_context_get_source_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Window> DragContext::get_source_window() const
{
  return const_cast<DragContext*>(this)->get_source_window();
}

 DragProtocol DragContext::get_protocol() const
{
  return ((DragProtocol)(gobj()->protocol));
}
 
 bool DragContext::get_is_source() const
{
  return gobj()->is_source;
}
 
DragAction DragContext::get_actions() const
{
  return ((DragAction)(gdk_drag_context_get_actions(const_cast<GdkDragContext*>(gobj()))));
}

DragAction DragContext::get_suggested_action() const
{
  return ((DragAction)(gdk_drag_context_get_suggested_action(const_cast<GdkDragContext*>(gobj()))));
}

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
DragAction DragContext::get_action() const
{
  return ((DragAction)(gdk_drag_context_get_selected_action(const_cast<GdkDragContext*>(gobj()))));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

DragAction DragContext::get_selected_action() const
{
  return ((DragAction)(gdk_drag_context_get_selected_action(const_cast<GdkDragContext*>(gobj()))));
}

 guint32 DragContext::get_start_time() const
{
  return gobj()->start_time;
}
 

} // namespace Gdk


