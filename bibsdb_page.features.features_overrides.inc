<?php
/**
 * @file
 * bibsdb_page.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|image_link"] = 'content';
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|breakpoint_1"] = 768;
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|breakpoint_2"] = 500;
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|fallback_style"] = 'ding_list_large';
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|max_style"] = 'ding_list_large';
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|style_1"] = 'ding_list_medium';
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.display|search_result|settings|styles|style_2"] = 'ding_list_small';

  // Exported overrides for: variable
  $overrides["variable.node_options_ding_page.value|0"]["DELETED"] = TRUE;
  $overrides["variable.pathauto_node_ding_page_pattern.value"] = 'indhold/[node:title]';

 return $overrides;
}
