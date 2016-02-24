Fltkhs - A Haskell Binding to the FLTK GUI Library
=============================================

Fltkhs aims to be a complete Haskell binding to the [FLTK GUI library] [1].

NOTE: As of version 0.4.0.0, due to the introduction of closed type families, only GHC >= 7.8.1 is supported.

Abbreviated installation instructions are for Linux and Mac are:

- Download [FLTK 1.3.3] [2].
- Install with:
```
    > ./configure --enable-shared
    > make
    > make install
```

- Install via the `fltkhs-hello-world` skeleton application:
```
    > git clone https://github.com/deech/fltkhs-hello-world
    > cd fltkhs-hello-world
    > stack build
```

- Test your installation by invoking: 'stack exec fltkhs-hello-world'.

The rest of the documentation (including installation instructions for Windows and API usage) is located in the [FLTKHS module] [3]. This is the primary module that needs to be imported by every Fltkhs app and the entry point into the application.

Screenshots
-----------

[Drawing with FLTKHS](images/arc-windows.png)

[A table of widgets](images/widget-table.png)

[A complex tree](images/tree-complex-windows.png) Done completely using Fluid. Notice how tree nodes can be arbitrary widgets.

Demos
-----
A number of demos are also available in the [fltkhs-demos] [4] and the [fltkhs-fluid-demos] [5] packages.

  [1]: http://www.fltk.org/index.php      "FLTK"
  [2]: http://www.fltk.org/software.php
  [3]: http://hackage.haskell.org/package/fltkhs/docs/Graphics-UI-FLTK-LowLevel-FLTKHS.html
  [4]: http://hackage.haskell.org/package/fltkhs-demos
  [5]: http://hackage.haskell.org/package/fltkhs-fluid-demos
