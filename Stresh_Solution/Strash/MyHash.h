#pragma once
#include <Windows.h>
#include "texture.h"
#define HASHSIZE 1000

typedef struct _tagMyHash
{
	Texture* m_texture;
}MyHash;

unsigned int MyHash_Hash(LPCTSTR _key);