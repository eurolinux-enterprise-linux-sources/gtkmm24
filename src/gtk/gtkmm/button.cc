// Generated by gtkmmproc -- DO NOT MODIFY!

// So we can still wrap the (deprecated) gtk_button_pressed(), gtk_button_clicked(),
// and gtk_button_enter functions.
#undef GTK_DISABLE_DEPRECATED
 

#include <gtkmm/button.h>
#include <gtkmm/private/button_p.h>

// -*- c++ -*-
/* $Id: button.ccg,v 1.1 2003/01/21 13:38:43 murrayc Exp $ */

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
#include <gtkmm/stock.h>


namespace Gtk
{

Button::Button(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(button_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{}

Button::Button(const StockID& stock_id)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(button_class_.init(), "use_stock",1,"label",stock_id.get_c_str(), static_cast<char*>(0)))
{}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo Button_signal_pressed_info =
{
  "pressed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Button_signal_released_info =
{
  "released",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Button_signal_clicked_info =
{
  "clicked",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Button_signal_enter_info =
{
  "enter",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Button_signal_leave_info =
{
  "leave",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Button_signal_activate_info =
{
  "activate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Button* wrap(GtkButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::Button *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Button_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Button_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Button_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->pressed = &pressed_callback;
  klass->released = &released_callback;
  klass->clicked = &clicked_callback;
  klass->enter = &enter_callback;
  klass->leave = &leave_callback;
  klass->activate = &activate_callback;
}


void Button_Class::pressed_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_pressed();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->pressed)
    (*base->pressed)(self);
}
void Button_Class::released_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_released();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->released)
    (*base->released)(self);
}
void Button_Class::clicked_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_clicked();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->clicked)
    (*base->clicked)(self);
}
void Button_Class::enter_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_enter();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->enter)
    (*base->enter)(self);
}
void Button_Class::leave_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_leave();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->leave)
    (*base->leave)(self);
}
void Button_Class::activate_callback(GtkButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_activate();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->activate)
    (*base->activate)(self);
}


Glib::ObjectBase* Button_Class::wrap_new(GObject* o)
{
  return manage(new Button((GtkButton*)(o)));

}


/* The implementation: */

Button::Button(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

Button::Button(GtkButton* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

Button::~Button()
{
  destroy_();
}

Button::CppClassType Button::button_class_; // initialize static member

GType Button::get_type()
{
  return button_class_.init().get_type();
}


GType Button::get_base_type()
{
  return gtk_button_get_type();
}


Button::Button()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(button_class_.init()))
{
  

}

#ifndef GTKMM_DISABLE_DEPRECATED

void Button::pressed()
{
gtk_button_pressed(gobj()); 
}

#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

void Button::released()
{
gtk_button_released(gobj()); 
}

#endif // GTKMM_DISABLE_DEPRECATED

void Button::clicked()
{
gtk_button_clicked(gobj()); 
}

#ifndef GTKMM_DISABLE_DEPRECATED

void Button::enter()
{
gtk_button_enter(gobj()); 
}

#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED

void Button::leave()
{
gtk_button_leave(gobj()); 
}

#endif // GTKMM_DISABLE_DEPRECATED

void Button::set_relief(ReliefStyle newstyle)
{
gtk_button_set_relief(gobj(), ((GtkReliefStyle)(newstyle))); 
}

ReliefStyle Button::get_relief() const
{
  return ((ReliefStyle)(gtk_button_get_relief(const_cast<GtkButton*>(gobj()))));
}

void Button::set_label(const Glib::ustring& label)
{
gtk_button_set_label(gobj(), label.c_str()); 
}

Glib::ustring Button::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_button_get_label(const_cast<GtkButton*>(gobj())));
}

void Button::set_use_underline(bool use_underline)
{
gtk_button_set_use_underline(gobj(), static_cast<int>(use_underline)); 
}

bool Button::get_use_underline() const
{
  return gtk_button_get_use_underline(const_cast<GtkButton*>(gobj()));
}

void Button::set_use_stock(bool use_stock)
{
gtk_button_set_use_stock(gobj(), static_cast<int>(use_stock)); 
}

bool Button::get_use_stock() const
{
  return gtk_button_get_use_stock(const_cast<GtkButton*>(gobj()));
}

void Button::set_focus_on_click(bool focus_on_click)
{
gtk_button_set_focus_on_click(gobj(), static_cast<int>(focus_on_click)); 
}

bool Button::get_focus_on_click() const
{
  return gtk_button_get_focus_on_click(const_cast<GtkButton*>(gobj()));
}

void Button::set_alignment(float xalign, float yalign)
{
gtk_button_set_alignment(gobj(), xalign, yalign); 
}

void Button::get_alignment(float& xalign, float& yalign)
{
gtk_button_get_alignment(gobj(), &(xalign), &(yalign)); 
}

void Button::set_image(Widget& image)
{
gtk_button_set_image(gobj(), (image).gobj()); 
}

Widget* Button::get_image()
{
  return Glib::wrap(gtk_button_get_image(gobj()));
}

const Widget* Button::get_image() const
{
  return const_cast<Button*>(this)->get_image();
}

void Button::set_image_position(PositionType position)
{
gtk_button_set_image_position(gobj(), ((GtkPositionType)(position))); 
}

PositionType Button::get_image_position() const
{
  return ((PositionType)(gtk_button_get_image_position(const_cast<GtkButton*>(gobj()))));
}

Glib::RefPtr<Gdk::Window> Button::get_event_window()
{

  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gtk_button_get_event_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gdk::Window> Button::get_event_window() const
{
  return const_cast<Button*>(this)->get_event_window();
}


Glib::SignalProxy0< void > Button::signal_pressed()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_pressed_info);
}


Glib::SignalProxy0< void > Button::signal_released()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_released_info);
}


Glib::SignalProxy0< void > Button::signal_clicked()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_clicked_info);
}


Glib::SignalProxy0< void > Button::signal_enter()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_enter_info);
}


Glib::SignalProxy0< void > Button::signal_leave()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_leave_info);
}


Glib::SignalProxy0< void > Button::signal_activate()
{
  return Glib::SignalProxy0< void >(this, &Button_signal_activate_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> Button::property_label() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> Button::property_label() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<ReliefStyle> Button::property_relief() 
{
  return Glib::PropertyProxy<ReliefStyle>(this, "relief");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<ReliefStyle> Button::property_relief() const
{
  return Glib::PropertyProxy_ReadOnly<ReliefStyle>(this, "relief");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Button::property_use_stock() 
{
  return Glib::PropertyProxy<bool>(this, "use-stock");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Button::property_use_stock() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "use-stock");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Button::property_focus_on_click() 
{
  return Glib::PropertyProxy<bool>(this, "focus-on-click");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Button::property_focus_on_click() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "focus-on-click");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> Button::property_xalign() 
{
  return Glib::PropertyProxy<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> Button::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> Button::property_yalign() 
{
  return Glib::PropertyProxy<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> Button::property_yalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gtk::Widget*> Button::property_image() 
{
  return Glib::PropertyProxy<Gtk::Widget*>(this, "image");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gtk::Widget*> Button::property_image() const
{
  return Glib::PropertyProxy_ReadOnly<Gtk::Widget*>(this, "image");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<PositionType> Button::property_image_position() 
{
  return Glib::PropertyProxy<PositionType>(this, "image-position");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<PositionType> Button::property_image_position() const
{
  return Glib::PropertyProxy_ReadOnly<PositionType>(this, "image-position");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::Button::on_pressed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->pressed)
    (*base->pressed)(gobj());
}
void Gtk::Button::on_released()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->released)
    (*base->released)(gobj());
}
void Gtk::Button::on_clicked()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->clicked)
    (*base->clicked)(gobj());
}
void Gtk::Button::on_enter()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->enter)
    (*base->enter)(gobj());
}
void Gtk::Button::on_leave()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->leave)
    (*base->leave)(gobj());
}
void Gtk::Button::on_activate()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    (*base->activate)(gobj());
}


} // namespace Gtk


