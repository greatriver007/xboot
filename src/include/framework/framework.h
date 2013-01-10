#ifndef __FRAMEWORK_H__
#define __FRAMEWORK_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xboot.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

/* Event */
#define	TYPE_EVENT				"event"
#define	TYPE_EVENT_LISTENER		"eventlistener"

int luaopen_event(lua_State * L);
int luaopen_event_listener(lua_State * L);
int luaopen_event_dispatch(lua_State * L);

/* Base64 */
int luaopen_base64(lua_State * L);

/* Framerate */
int luaopen_framerate(lua_State * L);

/* Xboot */
int luaopen_boot(lua_State * L);
int luaopen_xboot(lua_State * L);

#ifdef __cplusplus
}
#endif

#endif /* __FRAMEWORK_H__ */