## RSDKv5-GameAPI
An API bindings library, used for modding/developing projects based on the [Retro Engine v5](https://rsdkmodding.com/RSDKv5) and its [decompilation](https://github.com/RSDKModding/RSDKv5-Decompilation).

## **SUPPORT THE DEVELOPERS OF THE RETRO ENGINE**
We do not own the Retro Engine in any way, shape or form, and this project would not have been possible had they not developed RSDK in the first place. Retro Engine is currently owned by [Evening Star](https://eveningstar.studio/); we highly urge you to follow & support their projects if you enjoyed this project of ours!

## Get the source code
In order to clone the repository, you need to install Git, which you can get [here](https://git-scm.com/downloads).

- Initialize your project's repository, using: `git init`
- Add the submodule to your project's repository, using: `git submodule add https://github.com/RSDKModding/RSDKv5-GameAPI dependencies/RSDKv5-GameAPI`
- If you'd like to update the GameAPI submodule to get the latest changes, use: `git submodule update --remote dependencies/RSDKv5-GameAPI`

## GameAPI Flags
- `RETRO_REVISION`: What engine revision that your project will target. Takes an integer, defaults to `3` (RSDKv5U).
- `RETRO_USE_EGS`: Whether or not to include support for EGS features, such as achievements or extension overlays. (requires >= `RETRO_REV02`)
- `RETRO_USE_MOD_LOADER`: Enables or disables support for the decompilation's mod loader. Takes a boolean, defaults to `on`.
- `RETRO_MOD_LOADER_VER`: Manually sets the mod loader version. Takes an integer, defaults to the current latest version.
- `GAME_INCLUDE_EDITOR`: Whether or not to include functions for use in certain RSDKv5 scene editors. Takes a boolean, defaults to `on`.
- `GAME_TYPE`: The game that your project is based on. Takes an integer, defaults to `1` (`GAMETYPE_MANIA`).
  - `GAMETYPE_NONE`: Evaluates to `0`. Does not include any predefined variables from Sonic Mania, or Sonic 3 & Knuckles.
  - `GAMETYPE_MANIA`: Evaluates to `1`. Provides types, enums and definitions from Sonic Mania, such as `GlobalVariables`, `MANIA_USE_PLUS`.
  - `GAMETYPE_S3`: Evaluates to `2`. Provides types, enums and definitions from Sonic 3 & Knuckles, such as `GlobalVariables`, `ORIGINS_USE_PLUS`.
- `GAME_NO_VARIABLES`: Excludes all game-oriented variables, which includes types, enums and definitions such as: `SceneFilters`, `GET_CHARACTER_ID`, `NotifyCallbackIDs`.

## Examples
You can find examples on GameAPI's ModAPI bindings here: https://github.com/RSDKModding/RSDKv5-Example-Mods

## Contact:
Join the [Retro Engine Modding Discord Server](https://dc.railgun.works/retroengine) for any extra questions you may have about this library or how to use it.