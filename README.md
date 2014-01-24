# Overview
A simple wrapper for "chef-client --once".
This is most useful when the setuid permission is set, as this allows chef runs to
be triggered by non-root users without having to re-authenticate.

# Build

To build the Debian package, run `./gradlew clean debian`.
