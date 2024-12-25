#include <linux/version.h>
#include_next <uapi/drm/i915_drm.h>

#ifndef _BACKPORT_UAPI_DRM_I915_DRM_H
#define _BACKPORT_UAPI_DRM_I915_DRM_H

#if LINUX_VERSION_CODE < KERNEL_VERSION(6, 11, 0)
/*
 * I915_CONTEXT_PARAM_CONTEXT_IMAGE:
 *
 * Allows userspace to provide own context images.
 *
 * Note that this is a debug API not available on production kernel builds.
 */
#define I915_CONTEXT_PARAM_CONTEXT_IMAGE	0xf

struct i915_gem_context_param_context_image {
	/** @engine: Engine class & instance to be configured. */
	struct i915_engine_class_instance engine;
	/** @flags: One of the supported flags or zero. */
	__u32 flags;
#define I915_CONTEXT_IMAGE_FLAG_ENGINE_INDEX (1u << 0)
	/** @size: Size of the image blob pointed to by @image. */
	__u32 size;
	/** @mbz: Must be zero. */
	__u32 mbz;
	/** @image: Userspace memory containing the context image. */
	__u64 image;
} __attribute__((packed));
#endif

#endif