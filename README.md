Test-driven Development Templates for Coding Dojo
=================================================

Kata (programming), Wikipedia:
> A code kata is an exercise in programming which helps a programmer hone their skills through practice and repetition.

Before working on a coding dojo or kata, you have to prepare and setup the development environment. With the help of these templates you can shorten this process and focus on the coding.

The documentation is formatted in [Markdown](https://daringfireball.net/projects/markdown/) and can be read with a simple text editor.

How to use a template for a coding dojo?
----------------------------------------

* checkout this repository: `git clone path/to/repo` (or copy)
* create a new branch: `git checkout -b my_dojo` (optional)
* switch to your desired language template
* have a look at `README.md` for general instructions
* setup your IDE/editor
* start coding & have fun ...
* ... commit (intermediate) results: `git commit -a -m "my message"`


How to add a new template?
--------------------------

* add a sub-folder for new language
* extend `.gitignore`, see [github/gitignore](https://github.com/github/gitignore)
* create a `.editorconfig`, see [EditorConfig](http://editorconfig.org/) (optional)
* create a `README.md` and document basic steps, e.g. compilation, executing tests
* port one existing template to the new language
 * use a commonly used and simple project structure
 * use a build-in/commonly used build system, e.g. _make_ (C/C++)
 * use a build-in/commonly used unit test framework, e.g. _JUnit_ (Java)
 * use a build-in/commonly used API documentation, e.g. _JDoc_ (Java)
