# JunkBox_2007 (v0.9.0)
This is just a basic demo of programming skills, not a real product and it's work in progress.

## Status
- In progress (Currently modeling/composing the 3D scene in Blender...)
	* see: [TODO/](./docs/TODO.md) for a rough roadmap.
	* see: [Time/](./docs/Time.md) for time tracking.

## Idea (subject to change)
Emulate my experience making games on the home computer with GameMaker 6.

- A tiny 2D game engine.
- Backend agnostic (Raylib, DirectX, Sokol...)
- Very limited, like Pico-8.
- Scripting agnostic (Lua, Wren, C#, Python, ...)
- Game runs on a virtual screen in 3D space.
- Game may affect the 3D space through a fixed set of commands?

## Project structure & setup
- [bin/](./bin): build output directory.
- [build/](./build): CMake build scripts.
- [scripts/](./scripts): Scripts you can call to build/run the project.
- [docs/](./docs): project documentation (CHANGELOG, screenshots, profiler/debugger files, etc.)
- [src/](./src): all project source files.
- [vendor/](./vendor): all 3rd party source code and libraries.

### Supported platforms
At this moment the only supported platform is 64bit Windows, but project will work on 64 bit
Linux too. *Mac support is not planned because I do not own a Mac!*

Tested:
- [X] 64bit Windows + MSVC
- [ ] 64bit Linux (Ubuntu) + GCC

### Scripts
- [scripts/config.bat](./scripts/config.bat): Generates the build files with respect to the
given configuration variables:
	* `BUILD_TYPE`: valid options are `{ Debug, Release }`.
	* `BUILD_ENABLE_LOGS`: valid options are `{ 0, 1 }`, if enabled build will emit messages,
	otherwise it will be silent.
	* `PROJECT_NAME`: name of the project, also name of the executable, if `BUILD_TYPE` is set
	to `Debug` executable name will be formatted as follows: `PROJECT_NAME__Debug`.
	* `PROJECT_ENABLE_LOGS`: valid options are `{ 0, 1 }`, if enabled logging utilities will work
	as expected, otherwise they expand to no-op.
	* `PROJECT_ENGINE_BACKEND`: valid options are `{ Raylib, DirectX }`, allows for selection of
	engine backend (implementation).
	* `PROJECT_ENGINE_FRONTEND`: valid options are `{ Lua, Wren }`, allows for selection of
	engine frontend (scripting language).
- [scripts/build.bat](./scripts/build.bat): Builds the project, must run `config` first!
- [scripts/run.bat](./scripts/run.bat): Runs the project.

### Dependencies
In order to make builds as pleasant as possible all dependencies are located within the project
as a git submodule. Exact version of every dependency is hosted as a "fork" to ensure it's easy
to find. Right now these submodules are windows specific but in the future builds they will be
tagged for "Linux64" and "Windows64", to enable cross platform builds.

- [spdlog-v1.14.1](https://github.com/0xfeefee/spdlog-v1.14.1)
- [raylib-v5.0](https://github.com/0xfeefee/raylib-v5.0)
- [lua-v5.4.2](https://github.com/0xfeefee/lua-v5.4.2)
- [sol2-v3.3.0](https://github.com/0xfeefee/sol2-v3.3.0)

### Screenshots
First working iteration of the sprite renderer:
![First working iteration of sprite rendering - v.0.5.0](https://github.com/0xfeefee/CV/blob/main/docs/screenshots/v0.5.0.PNG)

Rendering the 2D engine scene onto a plane in 3D space:
![Rendering 2D game onto a plane in 3D space - v.0.6.0](https://github.com/0xfeefee/CV/blob/main/docs/screenshots/v0.6.0.PNG)

Applying post-processing to the 2D engine scene + loading `.obj` models:
![Applying post-processing and loading OBJ models](https://github.com/0xfeefee/CV/blob/main/docs/screenshots/v0.7.0.PNG)

Basic 3D scene composition:
![Testing out some basic 3D rendering styles and composition to see how it compares to the Blender scene](https://github.com/0xfeefee/CV/blob/main/docs/screenshots/v0.8.0.PNG)
