# Progress reporting and decomp.dev

Repository conventions were checked against the projects listed at
[decomp.dev/projects](https://decomp.dev/projects), including
[zeldaret/tp](https://github.com/zeldaret/tp) and
[doldecomp/melee](https://github.com/doldecomp/melee): source/config/tool separation,
version identification, private original inputs, documented builds and contributions,
and CI progress artifacts.

The [decomp.dev ingestion code](https://github.com/encounter/decomp.dev/blob/main/crates/github/src/lib.rs)
reads GitHub Actions artifacts named `<version>_report` and parses an
[objdiff report](https://github.com/encounter/objdiff/blob/main/objdiff-core/protos/report.proto).
A repository is separately registered with decomp.dev. Publishing a JSON file or
adding a badge does not register a project.

This repository publishes **`pal-progress`**, containing its own documented
`progress.json` and SVG badge. It does not currently publish an objdiff report or
claim a tracker listing. Our only complete denominator is the decoded image size:
it includes code, literals, padding and unclassified data. Encoding all of it as
`total_code`, or treating 39 reviewed functions as the full function denominator,
would misrepresent completion. Unknown counts remain null in our report.

Before tracker integration, establish a reviewed code/data inventory and function
boundaries, export accurate objdiff measures, and publish a `pal_report` artifact.
Then register the repository using the maintainer's GitHub account and verify the
imported totals. Dreamcast platform availability must also be checked; the tracker
has a [platform-support request](https://github.com/encounter/decomp.dev/issues/45).
No GitHub App has been installed and no tracker submission has been made here.

Public CI verifies the committed checkpoint's source hashes and accounting without
a game dump. Exact compilation is a separate local check. A changed admitted
source or manifest invalidates the checkpoint until a new local exact build is
recorded; changing a provisional candidate does not earn progress.
