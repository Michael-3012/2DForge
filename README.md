# 2DForge

2DForge is a custom 2D game engine built from scratch using C++20, SDL2 and OpenGL.

This project focuses on learning low-level programming, graphics programming and game engine architecture by building the fundamental systems that power a 2D game engine.

The goal is to create a modular, performant and extensible 2D game engine while understanding how everything works under the hood.

## Features

**Planned features:**

- [ ] Window management
- [ ] Input handling
- [ ] 2D rendering
- [ ] Sprite rendering
- [ ] Texture management
- [ ] Orthographic camera
- [ ] Tilemap system
- [ ] Entity Component System (ECS)
- [ ] 2D physics and collision detection
- [ ] Audio system
- [ ] Particle system
- [ ] Scene management
- [ ] Asset management
- [ ] Custom level editor

## Tech Stack

| Technology | Purpose |
|---|---|
| C++20 | Core programming language |
| SDL2 | Window management, input and audio |
| OpenGL | Hardware-accelerated rendering |
| GLM | Mathematics library |
| Dear ImGui | Editor interface |
| CMake | Build system |

## Project Goals

2DForge is built with the following goals in mind:

- Understand low-level programming and memory management.
- Learn graphics programming with OpenGL.
- Implement fundamental game engine systems from scratch.
- Explore efficient data structures and algorithms.
- Build a modular and maintainable engine architecture.
- Create a foundation for developing 2D games.

## Architecture

The engine will be developed as a collection of independent systems.

Planned architecture:

```text
2DForge
│
├── Core
│   ├── Application
│   ├── Logger
│   └── Memory
│
├── Platform
│   ├── Window
│   ├── Input
│   └── Time
│
├── Renderer
│   ├── Renderer2D
│   ├── Shader
│   ├── Texture
│   └── Camera
│
├── Scene
│   ├── Scene
│   └── Entity
│
├── Physics
│   ├── Collision
│   └── Physics2D
│
├── Audio
│
├── Assets
│
└── Editor
```

*Note: This architecture is a starting point and may evolve during development.*

## Building

Build instructions will be added once the initial project structure and build system have been established.

## Development Status

2DForge is currently in early development.

Features and architecture are subject to change as development progresses.

## License

License to be determined.
