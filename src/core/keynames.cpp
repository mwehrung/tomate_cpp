
#include "keynames.h"

///////////////////////////////////////////////////////////////////////////////
// class KeyName
///////////////////////////////////////////////////////////////////////////////
KeyName::KeyName()
{
}

KeyName::KeyName(string key, string name, string note) :
    key(key), name(name), note(note)
{
}

string KeyName::get_key() const
{
    return key;
}

string KeyName::get_name() const
{
    return name;
}

string KeyName::get_note() const
{
    return note;
}

void KeyName::set_note(string note)
{
    this->note = note;
}

void KeyName::set_name(string name)
{
    this->name = name;
}

KeyName::operator bool() const
{
    return !(key == "" && name == "");
}

KeyName NullKeyName;

bool operator==(const KeyName& elem1, const KeyName& elem2)
{
    return (elem1.get_key() == elem2.get_key());
}

///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// class KeyNames
///////////////////////////////////////////////////////////////////////////////
KeyName& KeyNames::index(int data_index)
{
    if (data_index >= 0)
    {
        KeyNames::iterator it = this->begin();
        advance(it, data_index);
        return *it;
    }
    else
    {
        return NullKeyName;
    }
}
///////////////////////////////////////////////////////////////////////////////
