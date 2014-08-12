<?php
/**
 * @file
 * content_type.pwt.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'pwt',
  'name' => 'PWT',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__pwt' => 'variable.field_bundle_settings_node__pwt',
  'variable.node_options_pwt' => 'variable.node_options_pwt',
  'variable.node_preview_pwt' => 'variable.node_preview_pwt',
  'variable.node_submitted_pwt' => 'variable.node_submitted_pwt',
  'variable.comment_default_per_page_pwt' => 'variable.comment_default_per_page_pwt',
  'variable.comment_form_location_pwt' => 'variable.comment_form_location_pwt',
  'variable.comment_preview_pwt' => 'variable.comment_preview_pwt',
  'variable.comment_subject_field_pwt' => 'variable.comment_subject_field_pwt',
);

$optional = array(
  'field.node.body.pwt' => 'field.node.body.pwt',
  'field.node.field_url.pwt' => 'field.node.field_url.pwt',
  'field.node.field_pubdate.pwt' => 'field.node.field_pubdate.pwt',
  'field.node.field_program_area.pwt' => 'field.node.field_program_area.pwt',
  'permission.create_pwt_content' => 'permission.create_pwt_content',
  'permission.edit_own_pwt_content' => 'permission.edit_own_pwt_content',
  'permission.edit_any_pwt_content' => 'permission.edit_any_pwt_content',
  'permission.delete_own_pwt_content' => 'permission.delete_own_pwt_content',
  'permission.delete_any_pwt_content' => 'permission.delete_any_pwt_content',
);

$modules = array(
  0 => 'node',
);
