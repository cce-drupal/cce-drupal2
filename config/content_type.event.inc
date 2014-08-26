<?php
/**
 * @file
 * content_type.event.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'event',
  'name' => 'Event',
  'description' => 'Use the Event content type to store CCE events.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__event' => 'variable.field_bundle_settings_node__event',
  'variable.node_options_event' => 'variable.node_options_event',
  'variable.node_preview_event' => 'variable.node_preview_event',
  'variable.node_submitted_event' => 'variable.node_submitted_event',
  'variable.comment_default_per_page_event' => 'variable.comment_default_per_page_event',
  'variable.comment_form_location_event' => 'variable.comment_form_location_event',
  'variable.comment_preview_event' => 'variable.comment_preview_event',
  'variable.comment_subject_field_event' => 'variable.comment_subject_field_event',
);

$optional = array(
  'field.node.body.event' => 'field.node.body.event',
  'field.node.field_county.event' => 'field.node.field_county.event',
  'field.node.field_location.event' => 'field.node.field_location.event',
  'field.node.field_program_area.event' => 'field.node.field_program_area.event',
  'field.node.field_startdate.event' => 'field.node.field_startdate.event',
  'field.node.field_url.event' => 'field.node.field_url.event',
  'permission.create_event_content' => 'permission.create_event_content',
  'permission.edit_own_event_content' => 'permission.edit_own_event_content',
  'permission.edit_any_event_content' => 'permission.edit_any_event_content',
  'permission.delete_own_event_content' => 'permission.delete_own_event_content',
  'permission.delete_any_event_content' => 'permission.delete_any_event_content',
);

$modules = array(
  0 => 'node',
);
