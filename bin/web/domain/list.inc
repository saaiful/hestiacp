#!/bin/sh

hestia_web_domain_list() {
    echo "Hestia web domain list $@"
    echo "Demo of 3-level commands"
    echo "This works as both Hestia CLI command and regular executable"
}

# If this files is _not_ being sourced, act immediately
# (otherise, wait for hestia cli to call the main function)
[[ $_ == $0 ]] && hestia_web_domain_list $@