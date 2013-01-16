Disformer

CONTENTS OF THIS FILE
---------------------

* Introduction
* Installation
* Usage

INTRODUCTION
------------
This module provides the functionality to prevent against double form
submissions. It does this by adding javascript to the page that when
the form is submitted, will disable the submit button and attaches an
overlay to the form as a visual reference that the information is being
sent.

Author: Mike Pezzi

INSTALLATION
------------
1. Copy disformer folder to the modules directory (usually sites/all/modules).
2. Enable the module.

USAGE
-----
1. Visit admin/config/user-interface/disformer
2. Provide a list of form ids you would like to enable disformer on.
3. Configure any additional settings on the page.
4. To test, enable "Debug" mode, this will prevent targeted forms from submitting,
   allowing you to see the disabling process and style any elements if needed.