#if defined _nominations_extended_included_
  #endinput
#endif
#define _nominations_extended_included_

native int GetNominationPool(ArrayList &pool);
native int PushMapIntoNominationPool(char[] map);
native int PushMapsIntoNominationPool(ArrayList maps);
native int RemoveMapFromNominationPool(char[] map);
native int RemoveMapsFromNominationPool(ArrayList maps);

/**
 *	Toggle the lock/unlock nomination mechanism.
 *
 * @param lock				Lock with true and unlock with false.
 *
 * @noreturn
*/
native void ToggleNominations(bool lock);

public SharedPlugin __pl_nominations_extended =
{
	name = "nominations",
	file = "nominations_extended.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};
