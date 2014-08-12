<?php
/**
 * @file
 * content_type.local_programs.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'local_programs',
  'name' => 'Local Programs',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__local_programs' => 'variable.field_bundle_settings_node__local_programs',
  'variable.node_options_local_programs' => 'variable.node_options_local_programs',
  'variable.node_preview_local_programs' => 'variable.node_preview_local_programs',
  'variable.node_submitted_local_programs' => 'variable.node_submitted_local_programs',
  'variable.comment_default_per_page_local_programs' => 'variable.comment_default_per_page_local_programs',
  'variable.comment_form_location_local_programs' => 'variable.comment_form_location_local_programs',
  'variable.comment_preview_local_programs' => 'variable.comment_preview_local_programs',
  'variable.comment_subject_field_local_programs' => 'variable.comment_subject_field_local_programs',
);

$optional = array(
  'field.node.body.local_programs' => 'field.node.body.local_programs',
  'field.node.field_url.local_programs' => 'field.node.field_url.local_programs',
  'field.node.field_pubdate.local_programs' => 'field.node.field_pubdate.local_programs',
  'field.node.field_authornameemail.local_programs' => 'field.node.field_authornameemail.local_programs',
  'field.node.field_county.local_programs' => 'field.node.field_county.local_programs',
  'field.node.field_program_area.local_programs' => 'field.node.field_program_area.local_programs',
  'permission.create_local_programs_content' => 'permission.create_local_programs_content',
  'permission.edit_own_local_programs_content' => 'permission.edit_own_local_programs_content',
  'permission.edit_any_local_programs_content' => 'permission.edit_any_local_programs_content',
  'permission.delete_own_local_programs_content' => 'permission.delete_own_local_programs_content',
  'permission.delete_any_local_programs_content' => 'permission.delete_any_local_programs_content',
);

$modules = array(
  0 => 'node',
);
