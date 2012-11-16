/*
Copyright (c) 2012 Daniele Bartolini, Simone Boscaratto

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include "VertexBuffer.h"
#include <GL/glew.h>

namespace crown
{

class GLVertexBuffer: public VertexBuffer
{

public:

				GLVertexBuffer();
				~GLVertexBuffer();

	void		SetVertexData(VertexBufferMode mode, const void* vertexData, uint32_t vertexCount);
	void		SetVertexSubData(const void* vertexData, uint32_t vertexOffset, uint32_t vertexCount);

	uint32_t		GetSize() const;
	uint32_t		GetVertexCount() const;

	void		Bind() const;
	void		Unbind() const;

private:
	
	GLuint			mBufferID;
	uint32_t		mSize;
	uint32_t		mVertexCount;
};

}

