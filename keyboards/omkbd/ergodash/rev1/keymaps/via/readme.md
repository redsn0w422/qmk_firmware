# ErgoDash rev1 VIA keymap

VIA-enabled keymap for the ErgoDash rev1. Personal fork build — not for upstream, since QMK
no longer accepts VIA keymaps or `via.json` files in the main repository.

Build/flash:

    qmk flash -kb omkbd/ergodash/rev1 -km via

Flash both halves. ErgoDash is not in the VIA app's built-in list, so open the VIA app,
enable the Design tab (Settings → "Show Design tab"), and load `ergodash_rev1_via.json`
(in this folder) as a draft definition.
