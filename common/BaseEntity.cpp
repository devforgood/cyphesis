#include <Atlas/Message/Object.h>
#include <Atlas/Objects/Root.h>
#include <Atlas/Objects/Operation/Login.h>
#include <Atlas/Objects/Operation/Create.h>
#include <Atlas/Objects/Operation/Move.h>
#include <Atlas/Objects/Operation/Set.h>
#include <Atlas/Objects/Operation/Sight.h>
#include <Atlas/Objects/Operation/Sound.h>
#include <Atlas/Objects/Operation/Touch.h>
#include <Atlas/Objects/Operation/Look.h>
#include <Atlas/Objects/Operation/Error.h>

#include "BaseEntity.h"



#if 0
bad_type get_dict_func(bad_type dict, bad_type func_str, bad_type func_undefined)
{
    try {
        return dict[func_str];
    }
    catch (KeyError) {
        try {
            func=dict[func_str]=getattr(self,func_str);
        }
        catch (AttributeError) {
            func=dict[func_str]=func_undefined;
        }
        return func;
    }
}
#endif

//base entity for IG and OOG things
BaseEntity::BaseEntity() : id(NO_ID), stamp(0.0), deleted(0), omnipresent(0) {
    //type",[BaseEntity::get_type()]);
    //if (kw.get("location",1)==None) {
        //del kw["location"];
    //}
    //instance",[]);
    //if (BaseEntity::type==[]: BaseEntity::type=[BaseEntity:) {
        //get_type()];
    //}
    //op_dict={};
}

#if 0
bad_type BaseEntity::super()
{
    return BaseEntity::__class__.__bases__[0];
}

bad_type BaseEntity::base_init(bad_type kw)
{
    try {
        class_=BaseEntity::base;
    }
    catch (AttributeError) {
        class_=BaseEntity::__class__;
    }
    base=class_.__bases__;
    if (base) {
        BaseEntity::base=base[0];
        apply(BaseEntity::base.__init__,(self,),kw);
    }
    else {
        del BaseEntity::base;
    }
}

bad_type BaseEntity::destroy()
{
    if (BaseEntity::deleted) {
        return;
    }
    for (/*obj in BaseEntity::contains*/) {
        if (not obj.deleted) {
            obj.location.parent=BaseEntity::location.parent;
        }
    }
    if (BaseEntity::location and BaseEntity::in BaseEntity::location.parent.contains) {
        BaseEntity::location.parent.contains.remove(self);
    }
}
bad_type BaseEntity::__repr__() {
    if (hasattr(self,"type") and len(BaseEntity::type)>=1) {
        return BaseEntity::type[0]+"("+`BaseEntity::id`+")";
    }
    return BaseEntity::__class__.__name__+"('')";
}

bad_type BaseEntity::get_type()
{
    return string.lower(self.__class__.__name__);
}
#endif

Vector3D BaseEntity::get_xyz()
{
    Location l=location;
    //if (!l) {
        //return Vector3D(0.0,0.0,0.0);
    //}
    if (l.parent) {
        return l.coords+l.parent->get_xyz();
    } else {
        return l.coords;
    }
}

bad_type BaseEntity::as_entity()
{
    Entity e=Entity(BaseEntity::id);
    for (char * a;;/*a in BaseEntity::attributes*/) {
        if (a=="location") {
            Location loc=location;
            //if (loc) {
                //e.location=loc.copy();
            //}
        } else {
            //setattr(e,a,getattr(BaseEntity::a));
        }
    }
    return e;
}


Message::Object & BaseEntity::asObject()
{
    cout << "BaseEntity::asObject" << endl << flush;
    Message::Object::MapType map;
    Message::Object * obj = new Message::Object(map);
    addObject(obj);
    return(*obj);
}


void BaseEntity::addObject(Message::Object * obj)
{
    cout << "BaseEntity::addObject" << endl << flush;
    Message::Object::MapType & omap = obj->AsMap();
    if (fullid.size() != 0) {
        omap["id"] = fullid;
    }
        
}

RootOperation * BaseEntity::message(const RootOperation & op)
{
    cout << "BaseEntity::message" << endl << flush;
    return operation(op);
}

bad_type BaseEntity::message(bad_type msg, bad_type op_method=None)
{
    if (None==op_method) {
        //op_method=operation;
    }
    if (! msg) {
        return None;
    }
    //if (msg.get_name()=="op") {
        //return op_method(msg);
    //}
    else {
#if 0
        bad_type res_msg=None;
        for (/*op in msg*/) {
            res=op_method(op);
            if (not res) {
                pass;
            } else if (res.get_name()=="op") {
                res.refno=op.no;
                if (! res_msg) {
                    res_msg=Message();
                }
                res_msg.append(res);
            }
            else {
                res_msg=res_msg+res;
            }
        }
        return res_msg;
#endif
    }
    return None;
}

bad_type BaseEntity::external_message(bad_type msg)
{
    BaseEntity::message(msg,None/*BaseEntity::external_operation*/);
    return None;
}

bad_type BaseEntity::find_operation(bad_type op_id, char * prefix="",bad_type undefined_operation=None)
{
#if 0
    if (!undefined_operation)
        undefined_operation=undefined_operation;
    }
    return get_dict_func(BaseEntity::BaseEntity::op_dict,;
                         prefix+op_id+"_operation",undefined_operation);
#endif
    return None;
}

bad_type BaseEntity::setup_operation(bad_type op)
{
    return(None);
}

bad_type BaseEntity::look_operation(bad_type op)
{
    bad_type reply;
    //reply=Operation("sight",BaseEntity::as_entity(),to=op.from_);
    BaseEntity::set_refno(reply,op);
    //return reply;
    return None;
}

bad_type BaseEntity::undefined_operation(bad_type op)
{
    return(None);
}

bad_type BaseEntity::call_operation(bad_type op)
{
    //operation_method=BaseEntity::find_operation(op.id);
    //return operation_method(op);
    return None;
}

RootOperation * BaseEntity::Operation(const Look & obj)
{
    cout << "louk op got all the way to here" << endl << flush;
    Sight * s = new Sight();
    *s = Sight::Instantiate();

    // Here we actually need to make this into a useful operation

    return(s);
}

op_no_t BaseEntity::op_enumerate(const RootOperation & op)
{
    cout << "BaseEntity::op_enumarate" << endl << flush;
    const Message::Object & parents = op.GetAttr("parents");
    if (!parents.IsList()) {
        cout << "This isn't an operation." << endl << flush;
    }
    if (parents.AsList().size() != 1) {
        cout << "This is a weird operation." << endl << flush;
    }
    if (!parents.AsList().begin()->IsString()) {
        cout << "This op is screwed.\n" << endl << flush;
    }
    string parent(parents.AsList().begin()->AsString());
    if ("login" == parent) {
        return(OP_LOGIN);
    }
    if ("create" == parent) {
        return(OP_CREATE);
    }
    if ("move" == parent) {
        return(OP_MOVE);
    }
    if ("set" == parent) {
        return(OP_SET);
    }
    if ("sight" == parent) {
        return(OP_SIGHT);
    }
    if ("sound" == parent) {
        return(OP_SOUND);
    }
    if ("touch" == parent) {
        return(OP_TOUCH);
    }
    if ("look" == parent) {
        return(OP_LOOK);
    }
    return (OP_INVALID);
}

RootOperation * BaseEntity::operation(const RootOperation & op)
{
    cout << "BaseEntity::operation" << endl << flush;
    op_no_t op_no = op_enumerate(op);
    switch (op_no) {
        case OP_LOGIN:
            return Operation((const Login &)op);
        case OP_CREATE:
            return Operation((const Create &)op);
        case OP_MOVE:
            return Operation((const Move &)op);
        case OP_SET:
            return Operation((const Set &)op);
        case OP_SIGHT:
            return Operation((const Sight &)op);
        case OP_SOUND:
            return Operation((const Sound &)op);
        case OP_TOUCH:
            return Operation((const Touch &)op);
        case OP_LOOK:
            return Operation((const Look &)op);
        default:
            cout << "nothing doing here" << endl;
    }
    //return call_operation(op);
    return Operation(op);
}

RootOperation * BaseEntity::external_operation(const RootOperation & op)
{
    return operation(op);
}

//bad_type BaseEntity::external_operation(bad_type op)
//{
    //return operation(op);
//}

bad_type BaseEntity::apply_to_operation(method_t method, bad_type msg, BaseEntity * obj)
{
    //bad_type msg=args[0];
    if (!msg) {
        return(None);
    }
    //if (msg.get_name()=="op") {
        //apply(method,args);
    //}
    //else {
        //for (/*op in msg*/) {
            //apply(method,(op,)+args[1:]);
        //}
    //}
    return None;
}

bad_type BaseEntity::set_refno_op(bad_type op, bad_type ref_op)
{
    //op.refno=ref_op.no;
    //if (op.refno<0 and op.no>0) {
        //op.no=-op.no;
    //}
    return None;
}

bad_type BaseEntity::set_refno(bad_type msg, bad_type ref_msg)
{
    //apply_to_operation(BaseEntity::set_refno_op,msg,ref_msg);
    return None;
}

bad_type BaseEntity::set_debug_op(bad_type op)
{
    //op.no=-op.no;
    return None;
}

bad_type BaseEntity::set_debug(const char * msg)
{
    //BaseEntity::apply_to_operation(BaseEntity::set_debug_op,msg);
    return None;
}

bad_type BaseEntity::debug_op(bad_type op, const char * string_message)
{
    //if (op.no<0 or op.refno<0) {
        //log.debug(1,`self`+".debug: "+string_message,op);
    //}
    return None;
}

bad_type BaseEntity::debug(bad_type msg, const char * string_message)
{
    //BaseEntity::apply_to_operation(BaseEntity::debug_op,msg,string_message);
    return None;
}

RootOperation * BaseEntity::error(const RootOperation & op, const char * string)
{
    Error * e = new Error();
    *e = Error::Instantiate();

    list<Message::Object> args(1,Message::Object(string));
    args.push_back(op.AsObject());

    e->SetArgs(args);

    return(e);
}
