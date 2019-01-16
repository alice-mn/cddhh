
/**
 * This file is part of Nokia OMAF implementation
 *
 * Copyright (c) 2018-2019 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: omaf@nokia.com
 *
 * This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
 * subsidiaries. All rights are reserved.
 *
 * Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
 * written consent of Nokia.
 */
#ifdef GL_OES_vertex_array_object
OMAF_GL_IMPORT(PFNGLGENVERTEXARRAYSOESPROC, glGenVertexArraysOES);
OMAF_GL_IMPORT(PFNGLBINDVERTEXARRAYOESPROC, glBindVertexArrayOES);
OMAF_GL_IMPORT(PFNGLDELETEVERTEXARRAYSOESPROC, glDeleteVertexArraysOES);
OMAF_GL_IMPORT(PFNGLISVERTEXARRAYOESPROC, glIsVertexArrayOES);
#endif

#ifdef GL_EXT_discard_framebuffer
OMAF_GL_IMPORT(PFNGLDISCARDFRAMEBUFFEREXTPROC, glDiscardFramebufferEXT);
#endif

#ifdef GL_OES_mapbuffer
OMAF_GL_IMPORT(PFNGLGETBUFFERPOINTERVOESPROC, glGetBufferPointervOES);
OMAF_GL_IMPORT(PFNGLMAPBUFFEROESPROC, glMapBufferOES);
OMAF_GL_IMPORT(PFNGLUNMAPBUFFEROESPROC, glUnmapBufferOES);
#endif

#ifdef GL_EXT_map_buffer_range
OMAF_GL_IMPORT(PFNGLMAPBUFFERRANGEEXTPROC, glMapBufferRangeEXT);
OMAF_GL_IMPORT(PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC, glFlushMappedBufferRangeEXT);
#endif

#ifdef GL_EXT_debug_label
OMAF_GL_IMPORT(PFNGLLABELOBJECTEXTPROC, glLabelObjectEXT);
OMAF_GL_IMPORT(PFNGLGETOBJECTLABELEXTPROC, glGetObjectLabelEXT);
#endif

#ifdef GL_EXT_debug_marker
OMAF_GL_IMPORT(PFNGLINSERTEVENTMARKEREXTPROC, glInsertEventMarkerEXT);
OMAF_GL_IMPORT(PFNGLPUSHGROUPMARKEREXTPROC, glPushGroupMarkerEXT);
OMAF_GL_IMPORT(PFNGLPOPGROUPMARKEREXTPROC, glPopGroupMarkerEXT);
#endif


#if GL_EXT_framebuffer_multisample || GL_EXT_multisampled_render_to_texture || GL_IMG_multisampled_render_to_texture
OMAF_GL_IMPORT(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC, glRenderbufferStorageMultisampleEXT);
#endif

#if GL_EXT_multisampled_render_to_texture || GL_IMG_multisampled_render_to_texture
OMAF_GL_IMPORT(PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC, glFramebufferTexture2DMultisampleEXT);
#endif

#if GL_KHR_debug

#if OMAF_GRAPHICS_API_OPENGL
/* see https://www.opengl.org/registry/specs/KHR/debug.txt
NOTE: when implemented in an OpenGL ES context, all entry points defined
by this extension must have a "KHR" suffix. When implemented in an
OpenGL context, all entry points must have NO suffix, as shown below.

This is not a proper fix but will do for now.
*/
#define GL_DEBUG_SOURCE_APPLICATION_KHR GL_DEBUG_SOURCE_APPLICATION
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR GL_MAX_DEBUG_MESSAGE_LENGTH
#define PFNGLDEBUGMESSAGECONTROLKHRPROC PFNGLDEBUGMESSAGECONTROLPROC
#define PFNGLDEBUGMESSAGEINSERTKHRPROC PFNGLDEBUGMESSAGEINSERTPROC
#define PFNGLDEBUGMESSAGECALLBACKKHRPROC PFNGLDEBUGMESSAGECALLBACKPROC
#define PFNGLGETDEBUGMESSAGELOGKHRPROC PFNGLGETDEBUGMESSAGELOGPROC
#define PFNGLPUSHDEBUGGROUPKHRPROC PFNGLPUSHDEBUGGROUPPROC
#define PFNGLPOPDEBUGGROUPKHRPROC PFNGLPOPDEBUGGROUPPROC
#define PFNGLOBJECTLABELKHRPROC PFNGLOBJECTLABELPROC
#define PFNGLGETOBJECTLABELKHRPROC PFNGLGETOBJECTLABELPROC
#define PFNGLOBJECTPTRLABELKHRPROC PFNGLOBJECTPTRLABELPROC
#define PFNGLGETOBJECTPTRLABELKHRPROC PFNGLGETOBJECTPTRLABELPROC
#define PFNGLGETPOINTERVKHRPROC PFNGLGETPOINTERVEXTPROC
#endif

OMAF_GL_IMPORT(PFNGLDEBUGMESSAGECONTROLKHRPROC, glDebugMessageControlKHR);
OMAF_GL_IMPORT(PFNGLDEBUGMESSAGEINSERTKHRPROC, glDebugMessageInsertKHR);
OMAF_GL_IMPORT(PFNGLDEBUGMESSAGECALLBACKKHRPROC, glDebugMessageCallbackKHR);
OMAF_GL_IMPORT(PFNGLGETDEBUGMESSAGELOGKHRPROC, glGetDebugMessageLogKHR);
OMAF_GL_IMPORT(PFNGLPUSHDEBUGGROUPKHRPROC, glPushDebugGroupKHR);
OMAF_GL_IMPORT(PFNGLPOPDEBUGGROUPKHRPROC, glPopDebugGroupKHR);
OMAF_GL_IMPORT(PFNGLOBJECTLABELKHRPROC, glObjectLabelKHR);
OMAF_GL_IMPORT(PFNGLGETOBJECTLABELKHRPROC, glGetObjectLabelKHR);
OMAF_GL_IMPORT(PFNGLOBJECTPTRLABELKHRPROC, glObjectPtrLabelKHR);
OMAF_GL_IMPORT(PFNGLGETOBJECTPTRLABELKHRPROC, glGetObjectPtrLabelKHR);
OMAF_GL_IMPORT(PFNGLGETPOINTERVKHRPROC, glGetPointervKHR);

#endif

#if GL_NVX_gpu_memory_info
// No functions to load
#endif

#if WGL_AMD_gpu_association
OMAF_GL_IMPORT(PFNWGLGETGPUIDSAMDPROC, wglGetGPUIDsAMD);
OMAF_GL_IMPORT(PFNWGLGETGPUINFOAMDPROC, wglGetGPUInfoAMD);
OMAF_GL_IMPORT(PFNWGLGETCONTEXTGPUIDAMDPROC, wglGetContextGPUIDAMD);
OMAF_GL_IMPORT(PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC, wglCreateAssociatedContextAMD);
OMAF_GL_IMPORT(PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC, wglCreateAssociatedContextAttribsAMD);
OMAF_GL_IMPORT(PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC, wglDeleteAssociatedContextAMD);
OMAF_GL_IMPORT(PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC, wglMakeAssociatedContextCurrentAMD);
OMAF_GL_IMPORT(PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC, wglGetCurrentAssociatedContextAMD);
OMAF_GL_IMPORT(PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC, wglBlitContextFramebufferAMD);
#endif

#if GL_EXT_draw_instanced
OMAF_GL_IMPORT(PFNGLDRAWARRAYSINSTANCEDEXTPROC, glDrawArraysInstancedEXT);
OMAF_GL_IMPORT(PFNGLDRAWELEMENTSINSTANCEDEXTPROC, glDrawElementsInstancedEXT);
#endif

#if GL_EXT_instanced_arrays
OMAF_GL_IMPORT(PFNGLVERTEXATTRIBDIVISOREXTPROC, glVertexAttribDivisorEXT);
#endif

#if GL_ARB_draw_instanced
OMAF_GL_IMPORT(PFNGLDRAWARRAYSINSTANCEDARBPROC, glDrawArraysInstancedARB);
OMAF_GL_IMPORT(PFNGLDRAWELEMENTSINSTANCEDARBPROC, glDrawElementsInstancedARB);
#endif

#if GL_ARB_instanced_arrays
OMAF_GL_IMPORT(PFNGLVERTEXATTRIBDIVISORARBPROC, glVertexAttribDivisorARB);
#endif

#if GL_NV_draw_instanced
OMAF_GL_IMPORT(PFNGLDRAWARRAYSINSTANCEDNVPROC, glDrawArraysInstancedNV);
OMAF_GL_IMPORT(PFNGLDRAWELEMENTSINSTANCEDNVPROC, glDrawElementsInstancedNV);
#endif

#if GL_NV_instanced_arrays
OMAF_GL_IMPORT(PFNGLVERTEXATTRIBDIVISORNVPROC, glVertexAttribDivisorNV);
#endif

#if GL_ARB_compute_shader
typedef PFNGLDISPATCHCOMPUTEPROC PFNGLDISPATCHCOMPUTEARBPROC;
typedef PFNGLDISPATCHCOMPUTEINDIRECTPROC PFNGLDISPATCHCOMPUTEINDIRECTARBPROC;

OMAF_GL_IMPORT(PFNGLDISPATCHCOMPUTEARBPROC, glDispatchComputeARB);
OMAF_GL_IMPORT(PFNGLDISPATCHCOMPUTEINDIRECTARBPROC, glDispatchComputeIndirectARB);
#endif
