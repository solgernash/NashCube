# NashCube

A learning-first custom 3D engine for the Nintendo GameCube.

## Purpose

This project exists to learn engine programming, graphics programming, and
GameCube hardware — not to ship a finished game as fast as possible. Every
system is meant to be personally understood and authored by the developer,
with AI assistance used for explanation, review, and small guided steps
rather than bulk code generation. See [CLAUDE.md](CLAUDE.md) for the full
set of working rules this project follows.

## Toolchain

- C or C++
- [devkitPPC](https://devkitpro.org/) (GameCube toolchain)
- libogc
- GX (GameCube's graphics API)
- [Dolphin](https://dolphin-emu.org/) for emulator testing, with real
  hardware testing where available

## Status

No code has been written yet. The project is currently at the planning /
first-milestone stage.

## Milestone roadmap

The first milestone is not a complete engine. Planned progression:

1. Build and run a minimal GameCube program
2. Read controller input
3. Initialize GX
4. Clear and display a frame
5. Render a triangle
6. Render a rotating triangle or cube
7. Understand every part of the frame lifecycle
8. Load one project-defined mesh
9. Add a camera
10. Play one audio file
11. Establish a reliable musical timeline
12. Prototype one short partnered dance sequence

Anything beyond these milestones is treated as future work until explicitly
selected.
