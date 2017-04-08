# ReasonNativeProject

Installation of [`Reason`](http://facebook.github.io/reason/) project for native compilation development.

[More info on the workflow](http://facebook.github.io/reason/nativeWorkflow.html).

[![Build Status](https://travis-ci.org/reasonml/ReasonNativeProject.svg?branch=master)](https://travis-ci.org/reasonml/ReasonNativeProject)

## Install

Clone the repo and install the dependencies:

```sh
git clone https://github.com/reasonml/ReasonNativeProject.git
cd ReasonNativeProject
# opam will read into the `opam` file and add the other dependencies
opam pin add -y ReasonNativeProject .
```
## Project structure

This project is called =reasonnativeproject=. It defines one library called
=reasonnativeprojectlib= and one executable called =app=.

The library is defined in =lib= and the executable in =src=. It also
defines a test in =test=.

At the toplevel of the project, there is a =reasonnativeproject.opam=
file. This file is required so that =jbuilder= knows that this is the
=reasonantiveproject= project.

To build everything that is meant to be installed in this project,
type:

#+begin_src
$ jbuilder build @install
#+end_src

To run the tests, type:

#+begin_src
$ jbuilder runtest
#+end_src

```
.
├── _build            # build artifacts 
├── README.md
├── circle.yml
├── jbuild-workspace
├── lib
│   ├── jbuild
│   ├── messenger.re
│   └── messenger.rei
├── reasonnativeproject.install
├── reasonnativeproject.opam
├── src
│   ├── _build
│   │   └── log
│   ├── app.re
│   ├── jbuild
│   └── messenger.re
└── test
    ├── jbuild
    └── test.re
```

### Build


```sh
jbuilder build @install # build/rebuild your files
rm -rf _build # clean the compiled artifacts
```

A single test file `./src/test.re` is included. Make a simple change to it and
then run the commands above to see it effect the output.

The built output is in `_build`. Try running it with `_build/default/src/app.exe`.

## Developing Your Project

`ReasonNativeProject` is meant to be the starting point of your own project. You'll
want to make use of existing libraries in your app, so browse the growing set
of `opam` packages in the [opam repository](http://opam.ocaml.org/packages/).

##### Add Another Dependency

Edit your `opam` file so that you depend on a particular opam package and range
of versions.

### Creating Libraries

See the [OPAM instructions](https://opam.ocaml.org/doc/Packaging.html).

## Troubleshooting

In general, if something goes wrong, try upgrading your install of the project
by running `opam upgrade ReasonNativeProject`, or if it failed to install and you
later fixed it, `opam install ReasonNativeProject`.
