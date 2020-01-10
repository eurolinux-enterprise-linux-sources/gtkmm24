// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ACCELGROUP_H
#define _GTKMM_ACCELGROUP_H


#include <glibmm.h>

/* $Id: accelgroup.hg,v 1.8 2005/04/07 08:46:44 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
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


#include <gdkmm/types.h>
#include <gtkmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAccelGroup GtkAccelGroup;
typedef struct _GtkAccelGroupClass GtkAccelGroupClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class AccelGroup_Class; } // namespace Gtk
namespace Gtk
{

/** A Gtk::AccelGroup represents a group of keyboard accelerators, typically
 * attached to a toplevel Gtk::Window (with Gtk::Window::add_accel_group()).
 * Usually you won't need to create a Gtk::AccelGroup directly; instead, gtkmm
 * automatically sets up the accelerators for your menus.  Note that
 * accelerators are different from mnemonics.  Accelerators are shortcuts for
 * activating a menu item; they appear alongside the menu item for which
 * they're a shortcut. For example "Ctrl+Q" might appear alongside the "Quit"
 * menu item.  Mnemonics are shortcuts for GUI elements such as text entries or
 * buttons; they appear as underlined characters. See the Gtk::Label
 * constructor. Menu items can have both accelerators and mnemonics, of course.
 *
 * You can use Gtk::Window::get_accel_group() to get an accel group for that window,
 * then use it with other widgets too.
 */

class AccelGroup : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef AccelGroup CppObjectType;
  typedef AccelGroup_Class CppClassType;
  typedef GtkAccelGroup BaseObjectType;
  typedef GtkAccelGroupClass BaseClassType;

private:  friend class AccelGroup_Class;
  static CppClassType accelgroup_class_;

private:
  // noncopyable
  AccelGroup(const AccelGroup&);
  AccelGroup& operator=(const AccelGroup&);

protected:
  explicit AccelGroup(const Glib::ConstructParams& construct_params);
  explicit AccelGroup(GtkAccelGroup* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~AccelGroup();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkAccelGroup*       gobj()       { return reinterpret_cast<GtkAccelGroup*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkAccelGroup* gobj() const { return reinterpret_cast<GtkAccelGroup*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkAccelGroup* gobj_copy();

private:

   
protected:
  AccelGroup();

public:
  /** Creates a new Gtk::AccelGroup object.
   * @return A Glib::RefPtr<> to a newly created Gtk::AccelGroup object.
   */
  
  static Glib::RefPtr<AccelGroup> create();


  /** Locks are added and removed using lock() and
   * unlock().
   * 
   * @newin{2,14}
   * @return <tt>true</tt> if there are 1 or more locks on the @a accel_group,
   * <tt>false</tt> otherwise.
   */
  bool get_is_locked() const;
  
  /** Gets a Gdk::ModifierType representing the mask for this
   *  @a accel_group. For example, Gdk::CONTROL_MASK, Gdk::SHIFT_MASK, etc.
   * 
   * @newin{2,14}
   * @return The modifier mask for this accel group.
   */
  Gdk::ModifierType get_modifier_mask() const;

  
  /** Locks the given accelerator group.
   * 
   * Locking an acelerator group prevents the accelerators contained
   * within it to be changed during runtime. Refer to
   * Gtk::AccelMap::change_entry() about runtime accelerator changes.
   * 
   * If called more than once, @a accel_group remains locked until
   * unlock() has been called an equivalent number
   * of times.
   */
  void lock();
  
  /** Undoes the last call to lock() on this @a accel_group.
   */
  void unlock();
  
  /** Removes an accelerator previously installed through
   * connect().
   * @param accel_key Key value of the accelerator.
   * @param accel_mods Modifier combination of the accelerator.
   * @return <tt>true</tt> if there was an accelerator which could be 
   * removed, <tt>false</tt> otherwise.
   */
  bool disconnect_key(guint accel_key, Gdk::ModifierType accel_mods);

  /** Determines whether a given keyval and modifier mask constitute
  * a valid keyboard accelerator. For example, the 'a' keyval
  * plus Gdk::CONTROL_MASK is valid - this is a "Ctrl+a" accelerator.
  * But you can't, for instance, use the GDK_Control_L keyval
  * as an accelerator.
  */
  static bool valid(guint keyval, Gdk::ModifierType modifiers);

   /** Parse the accelerator string.
   * @param accelerator See the Gtk::AccelKey constructor for the format.
   * @param accelerator_key Output argument
   * @param accelerator_mods Output argument
   */
  static void parse(const Glib::ustring& accelerator, guint& accelerator_key, Gdk::ModifierType& accelerator_mods);

  /** Converts an accelerator keyval and modifier mask
   * into a string parseable by parse().
   * For example, if you pass in 'q' and Gdk::CONTROL_MASK, it returns "&lt;Control&gt;q".
   */
  static Glib::ustring name(guint accelerator_key, Gdk::ModifierType accelerator_mods);

  
  /** Converts an accelerator keyval and modifier mask into a string 
   * which can be used to represent the accelerator to the user. 
   * 
   * @newin{2,6}
   * @param accelerator_key Accelerator keyval.
   * @param accelerator_mods Accelerator modifier mask.
   * @return A newly-allocated string representing the accelerator.
   */
  static Glib::ustring get_label(guint accelerator_key, Gdk::ModifierType accelerator_mods);

  /** Sets the modifiers that will be considered significant for keyboard
   * accelerators. The default mod mask is Gdk::CONTROL_MASK |
   * Gdk::SHIFT_MASK | Gdk::MOD1_MASK, that is, Control, Shift, and Alt.
   * Other modifiers will ignored by default.
   * You must include at least the three default modifiers in any
   * value you pass to this function.
   *
   * The default mod mask should be changed on application startup,
   * before using any accelerator groups.
   */
  static void set_default_mod_mask(Gdk::ModifierType default_mod_mask);

  /// See set_default_mod_mask().
  static Gdk::ModifierType get_default_mod_mask();

  //TODO: Add an overload that takes a ustring instead of a GQuark.
  
  /** Finds the first accelerator in @a accel_group 
   * that matches @a accel_key and @a accel_mods, and
   * activates it.
   * @param accel_quark The quark for the accelerator name.
   * @param acceleratable The Object, usually a Gtk::Window, on which
   * to activate the accelerator.
   * @param accel_key Accelerator keyval from a key event.
   * @param accel_mods Keyboard state mask from a key event.
   * @return <tt>true</tt> if an accelerator was activated and handled this keypress.
   */
  bool activate(GQuark accel_quark, const Glib::RefPtr<Glib::Object>& acceleratable, guint accel_key, Gdk::ModifierType accel_mods);

  
  //Let's not wrap this, because the GtkAccelGroupFindFunc callback uses GClosures, and it's not clear that this is useful.
  //AccelKey find(const SlotFind& slot);
  //GtkAccelKey*	gtk_accel_group_find(GtkAccelGroup* accel_group, GtkAccelGroupFindFunc find_func, gpointer data);
                            
  
  /** Finds the first accelerator in any Gtk::AccelGroup attached
   * to @a object that matches @a accel_key and @a accel_mods, and
   * activates that accelerator.
   * @param object The Object, usually a Gtk::Window, on which
   * to activate the accelerator.
   * @param accel_key Accelerator keyval from a key event.
   * @param accel_mods Keyboard state mask from a key event.
   * @return <tt>true</tt> if an accelerator was activated and handled this keypress.
   */
  static bool activate(Gtk::Object& object, guint accel_key, Gdk::ModifierType accel_mods);


  /**
   * @par Prototype:
   * <tt>bool on_my_%accel_activate(const Glib::RefPtr<Glib::Object>& acceleratable, guint keyval, Gdk::ModifierType modifier)</tt>
   */

  Glib::SignalProxy3< bool,const Glib::RefPtr<Glib::Object>&,guint,Gdk::ModifierType > signal_accel_activate();
   

  //TODO: The C type is unpleasant:
  //This has C docs, but it isn't worth mentioning them for such a useless signal. murrayc.
  
  /**
   * @par Prototype:
   * <tt>void on_my_%accel_changed(guint keyval, Gdk::ModifierType modifier, GClosure* accel_closure)</tt>
   */

  Glib::SignalProxy3< void,guint,Gdk::ModifierType,GClosure* > signal_accel_changed();

  
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Is the accel group locked.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_is_locked() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Modifier Mask.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gdk::ModifierType> property_modifier_mask() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_accel_changed(guint keyval, Gdk::ModifierType modifier, GClosure* accel_closure);


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::AccelGroup
   */
  Glib::RefPtr<Gtk::AccelGroup> wrap(GtkAccelGroup* object, bool take_copy = false);
}


#endif /* _GTKMM_ACCELGROUP_H */

