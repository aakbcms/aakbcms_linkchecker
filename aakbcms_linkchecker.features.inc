<?php
/**
 * @file
 * aakbcms_linkchecker.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aakbcms_linkchecker_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
