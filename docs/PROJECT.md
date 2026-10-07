# Project build

The admitted matching manifest is `config/project.json`; the unresolved queue is
`config/reconstruction-targets.json`. See [BUILDING.md](BUILDING.md) for a fresh
checkout and [PROGRESS.md](PROGRESS.md) for verified coverage.

Compilation uses the fixed CodeWarrior flags, explicit addresses and declared
header dependencies. Each complete range is compared exactly before integration.
The image map accounts separately for compiled ranges and retained reference gaps.
`--source-only` rejects those gaps. No generated game image is published.
