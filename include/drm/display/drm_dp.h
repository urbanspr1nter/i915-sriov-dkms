#include <linux/version.h>
#include_next <drm/display/drm_dp.h>

#ifndef _BACKPORT_DRM_DISPLAY_DRM_DP_H
#define _BACKPORT_DRM_DISPLAY_DRM_DP_H

#if LINUX_VERSION_CODE < KERNEL_VERSION(6, 11, 0)
#define DP_ALPM_PM_STATE_2A_SUPPORT	    (1 << 1) /* eDP 1.5 */
#define DP_ALPM_AUX_LESS_CAP		    (1 << 2) /* eDP 1.5 */

# define DP_PANEL_REPLAY_EARLY_TRANSPORT_SUPPORT	(1 << 2) /* eDP 1.5 */
# define DP_PANEL_REPLAY_VSC_SDP_CRC_EN                 (1 << 1) /* eDP 1.5 */
#define PANEL_REPLAY_CONFIG2                                     0x1b1 /* eDP 1.5 */
# define DP_PANEL_REPLAY_SINK_REFRESH_RATE_UNLOCK_GRANTED	 (1 << 0)
# define DP_PANEL_REPLAY_CRC_VERIFICATION			 (1 << 1)
# define DP_PANEL_REPLAY_SU_Y_GRANULARITY_EXTENDED_EN		 (1 << 2)
# define DP_PANEL_REPLAY_SU_Y_GRANULARITY_EXTENDED_VAL_SEL_SHIFT 3
# define DP_PANEL_REPLAY_SU_Y_GRANULARITY_EXTENDED_VAL_SEL_MASK  (0xf << 3)
# define DP_PANEL_REPLAY_SU_REGION_SCANLINE_CAPTURE		 (1 << 7)

#define DP_PANEL_PANEL_REPLAY_CAPABILITY		0xb1
# define DP_PANEL_PANEL_REPLAY_SU_GRANULARITY_REQUIRED	(1 << 5)
#define DP_PANEL_PANEL_REPLAY_X_GRANULARITY		0xb2
#define DP_PANEL_PANEL_REPLAY_Y_GRANULARITY		0xb4

# define DP_PANEL_REPLAY_ENABLE_SU_REGION_ET            (1 << 7) /* DP 2.1 */

# define DP_ALPM_PM_STATE_2A_SUPPORT	    (1 << 1) /* eDP 1.5 */
# define DP_ALPM_AUX_LESS_CAP		    (1 << 2) /* eDP 1.5 */

# define DP_ALPM_MODE_AUX_LESS		    (1 << 2) /* eDP 1.5 */
#endif

#endif