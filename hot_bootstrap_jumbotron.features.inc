<?php
/**
 * @file
 * hot_bootstrap_jumbotron.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_bootstrap_jumbotron_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
