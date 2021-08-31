# Mapchooser Extended

Advanced Automated Map Voting with Extensions

# Server ConVars
## MapChooser Extended:
- mce_endvote - Specifies if MapChooser should run an end of map vote.
- mce_starttime - Specifies when to start the vote based on time remaining.
- mce_startround - Specifies when to start the vote based on rounds remaining. Use 0 on DoD:S, CS:S, and TF2 to start vote during bonus round time.
- mce_startfrags - Specifies when to start the vote base on frags remaining.
- mce_extend_timestep - Specifies how much many more minutes each extension makes.
- mce_extend_roundstep - Specifies how many more rounds each extension makes.
- mce_extend_fragstep - Specifies how many more frags are allowed when map is extended.
- mce_exclude - Specifies how many past maps to exclude from the vote.
- mce_include - Specifies how many maps to include in the vote.
- mce_novote - Specifies whether or not MapChooser should pick a map if no votes are received.
- mce_extend - Number of extensions allowed each map.
- mce_dontchange - Specifies if a 'Don't Change' option should be added to early votes.
- mce_voteduration - Specifies how long the mapvote should be available for.
- mce_version - MapChooser Extended Version.
- mce_runoff - Hold run off votes if winning choice has less than a certain percentage of votes.
- mce_runoffpercent - If winning choice has less than this percent of votes, hold a runoff.
- mce_blockslots - Block slots to prevent accidental votes. Only applies when Voice Command style menus are in use.
- mce_blockslots_count - Number of slots to block.
- mce_maxrunoffs - Number of run off votes allowed each map.
- mce_start_percent - Specifies when to start the vote based on percents.
- mce_start_percent_enable - Enable or Disable percentage calculations when to start vote.
- mce_warningtime - Warning time in seconds.
- mce_runoffvotewarningtime - Warning time for runoff vote in seconds.
- mce_menustyle - Menu Style. 0 is the game's default, 1 is the older Valve style that requires you to press Escape to see the menu, 2 is the newer 1-9 button Voice Command style, unavailable in some games. Ignored on TF2 if NativeVotes Plugin is loaded.
- mce_warningtimerlocation - Location for the warning timer text. 0 is HintBox, 1 is Center text, 2 is Chat. Defaults to HintBox.
- mce_markcustommaps - Mark custom maps in the vote list. 0 = Disabled, 1 = Mark with *, 2 = Mark with phrase.
- mce_extendposition - Position of Extend/Don't Change options. 0 = at end, 1 = at start.
- mce_randomizeorder - Randomize map order?
- mce_hidetimer - Hide the MapChooser Extended warning timer.
- mce_addnovote - Add "No Vote" to vote menu? -- Admin --
- mce_reload_maplist - Reload the Official Maplist file.
sm_mapvote - Forces MapChooser to attempt to run a map vote now.
- sm_setnextmap - Sets the nextmap
MapChooser Extended Sounds:
- mce_sounds_enablesounds - Enable this plugin. Sounds will still be downloaded (if applicable) even if the plugin is disabled this way.
- mce_sounds_enablewarningcountersounds - Enable sounds to be played during warning counter. If this is disabled, map vote warning, start, and stop sounds still play.
- mce_sounds_soundset - Sound set to use, optimized for hl1 by default. Sound sets are defined in addons/sourcemod/configs/mapchooser_extended_sounds.cfg. Takes effect immediately if sm_mapvote_downloadallsounds is 1, otherwise at map change.
- mce_sounds_downloadallsounds - Force players to download all sound sets, so sets can be dynamically changed during the map. Defaults to off. Takes effect at map change.
- mce_sounds_version - Mapchooser Extended Sounds Version -- Admin --
- mce_sounds_reload - Reload Mapchooser Sound configuration file.
- sm_mapvote_reload_sounds - Deprecated: use mce_sounds_reload.
- mce_sounds_list_soundsets - List available Mapchooser Extended sound sets.
- sm_mapvote_list_soundsets - Deprecated: use mce_sounds_list_soundsets.
## Nominations Extended:
- sm_nominate_excludeold - Specifies if the current map should be excluded from the Nominations list.
- sm_nominate_excludecurrent - Specifies if the MapChooser excluded maps should also be excluded from Nominations.
- sm_nominate_initialdelay - Time in seconds before first Nomination can be made.
- sm_nominate_delay - Delay between nominations. -- Commands --
- sm_nominate
- sm_nomlist -- Admin --
- sm_nominate_addmap - Forces a map to be on the next mapvote.
- sm_nominate_removemap - Removes a map from Nominations.
- sm_nominate_exclude - Forces a map to be inserted into the recently played maps. Effectively blocking the map from being nominated.
## Rockthevote Extended:
- sm_rtv_needed - Percentage of players needed to rockthevote (Def 60%).
- sm_rtv_minplayers - Number of players required before RTV will be enabled.
- sm_rtv_initialdelay - Time (in seconds) before first RTV can be held.
- sm_rtv_interval - Time (in seconds) after a failed RTV before another can be held.
- sm_rtv_changetime - When to change the map after a succesful RTV: 0 - Instant, 1 - RoundEnd, 2 - MapEnd.
- sm_rtv_postvoteaction - What to do with RTV's after a mapvote has completed. 0 - Allow, success = instant change, 1 - Deny. -- Commands --
- sm_rtv -- Admin --
- sm_forcertv - Force an RTV vote.
- sm_disablertv - Disable the RTV command.
- sm_enablertv - Enable the RTV command.
- sm_playersrtv - Count Players Online in Game.

## Credits
- Powerlord
- Zuko
- Alliedmodders LLC
- Botox
- zaCade
- neon
