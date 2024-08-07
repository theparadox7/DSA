import base64

def obfuscate_payload(payload):
    encoded_payload = base64.b64encode(payload.encode('utf-8'))
    
    obfuscated_payload = encoded_payload[::-1]
    
    return obfuscated_payload.decode('utf-8')

def deobfuscate_payload(obfuscated_payload):
    reversed_payload = obfuscated_payload[::-1]

    decoded_payload = base64.b64decode(reversed_payload)
    
    return decoded_payload.decode('utf-8')

if __name__ == "__main__":
    original_payload = "This is a secret message"
    
    # Obfuscate the payload
    obfuscated = obfuscate_payload(original_payload)
    print(f"Original Payload: {original_payload}")
    print(f"Obfuscated Payload: {obfuscated}")
    
    # Deobfuscate the payload
    deobfuscated = deobfuscate_payload(obfuscated)
    print(f"Deobfuscated Payload: {deobfuscated}")
